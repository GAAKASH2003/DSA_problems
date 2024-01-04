/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode*lcs(TreeNode*root,TreeNode* p, TreeNode* q){
      if(root==NULL) return NULL;
      int curr=root->val;
     
      if(p->val>curr and q->val>curr){
         return lcs(root->right,p,q);
      }
      if(p->val<curr and q->val<curr){
         return lcs(root->left,p,q);
      }
      return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        return lcs(root,p,q);
    }
};