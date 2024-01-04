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
    int h(TreeNode *root){
        if(root==NULL) return 0;
        return 1+max(h(root->right),h(root->left));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int l=h(root->left);
        int r=h(root->right);
        return (abs(l-r)<=1) and isBalanced(root->left) and isBalanced(root->right); 
    }
};