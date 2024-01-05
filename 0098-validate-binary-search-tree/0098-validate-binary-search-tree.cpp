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
    bool check(TreeNode* root,long int mi,long int ma){
        if(root==NULL){
            return true;
        }
        return (root->val>mi and root->val<ma and check(root->left,mi,root->val) and check(root->right,root->val,ma));
    }
    bool isValidBST(TreeNode* root){
      long int mini=-4294967296;
      long int maxi=4294967295;
     
      
      
      
        return check(root,mini,maxi);
    }
};