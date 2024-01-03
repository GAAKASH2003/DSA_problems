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
    vector<vector<int>>ans;
    vector<int>temp;
    void path(TreeNode* root,vector<vector<int>>&ans,vector<int>&temp,int curval,int tar){
        if(root==NULL) return;
        temp.push_back(root->val);
        
        if(!root->left and !root->right){ 
            if((curval+root->val)==tar){
                ans.push_back(temp);
                
            }
           
        };
        path(root->left,ans,temp,curval+root->val,tar);
        path(root->right,ans,temp,curval+root->val,tar);
        temp.pop_back();
    } 
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<int>temp;
        vector<vector<int>>ans;
        int curval=0;
        path(root,ans,temp,curval,t);
        return ans;
    }
};