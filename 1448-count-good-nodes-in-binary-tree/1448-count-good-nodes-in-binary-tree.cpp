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
    void check(TreeNode*root,int prev){
        if(!root){
            return ;
        }
        
        if(prev<=root->val){
             // cout<<root->val;
            count++;
        }
        prev=max(prev,root->val);
        check(root->left,prev);
        check(root->right,prev);
    }
    int goodNodes(TreeNode* root){
        check(root,root->val);
        return count;
    }
};