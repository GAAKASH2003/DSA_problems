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
    int m=INT_MIN;
    int inorder(TreeNode* root){
        if(!root){
            return 0;    
        }
       int l=inorder(root->left);
       int r=inorder(root->right); 
       int temp=max(max(l,r)+root->val,root->val);
       int res=max(temp,root->val+l+r);
       m=max(res,m);
       return temp; 
    }
    int maxPathSum(TreeNode* root) {
        inorder(root);
        return m;
    }
};