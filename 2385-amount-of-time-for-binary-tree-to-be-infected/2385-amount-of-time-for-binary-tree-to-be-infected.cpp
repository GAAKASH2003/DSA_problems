/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 bool rec(TreeNode*root,int target,vector<pair<TreeNode*,int>>&v,int l){
         if(root==NULL){
             return false;
         }
         v.push_back({root,l});
         if(root->val==target) return true;
         if(rec(root->left,target,v,1) or rec(root->right,target,v,0)) return true;
         v.pop_back();
         return false;
    }
    int maxh(TreeNode*root){
        if(root==NULL) return 0;
        return 1+max(maxh(root->right),maxh(root->left));
    }
    

    int amountOfTime(TreeNode* root, int target) {
        vector<pair<TreeNode*,int>>v;
        rec(root,target,v,-1);
        int h=v.size();
        int  n=v.size();
        h=max(h,maxh(v[n-1].first))-1;
        for(int i=0;i<n;i++){
            if(i+1<n){
            if(v[i+1].second==1){
                h=max(h,(n-1-i)+maxh(v[i].first->right));}
            if(v[i+1].second==0){
                h=max(h,(n-1-i)+maxh(v[i].first->left));}
            }
        }
        
        return h;
    }
};