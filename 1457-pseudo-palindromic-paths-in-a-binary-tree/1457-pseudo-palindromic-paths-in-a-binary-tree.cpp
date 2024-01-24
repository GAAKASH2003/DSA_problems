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
    int count=0;
    // bool check(vector<int>v){
    //     map<int,int>mp;
    //     for(auto x:v){
    //         mp[x]++;
    //     }
    //     int sem=0;
    //     for(auto x:mp){
    //         if(x.second%2!=0){
    //             sem++;
    //         }
    //     }
    //    if(v.size()%2==0) return sem==0;
    //    else return  sem==1 ;
    //    return true;   
    // }   
    void inorder(TreeNode* root,vector<int>&v){
        if(root==NULL) return;
        v[root->val]++;
        
        if(!root->left and !root->right){
            int sem=0;
            for(int i=1;i<=9;i++){
                if(v[i]%2!=0){
                    sem++;
                }
               
            }
    
            if(sem==0 or sem==1) count++;
        }
        inorder(root->left,v);
        inorder(root->right,v);
        v[root->val]--;
        // c--;
    }
    int pseudoPalindromicPaths (TreeNode* root){
        vector<int>v(10,0);
        inorder(root,v);
        return count;
    }
};