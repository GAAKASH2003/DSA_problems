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
    bool isl(TreeNode*root){
        return !(root->left or root->right);
    }
    bool check(TreeNode* r, TreeNode* s){
        if(r==NULL and s){
            return false;
        }
        if(r and s==NULL){
            return false;
        }
        if(r==NULL and s==NULL) return true;
        if(isl(r) and isl(s)){
            return (r->val)==(s->val);
        }
        if(r->val!=s->val){
            return false;
        }
        bool left=check(r->left,s->right);
        bool right=check(r->right,s->left);
        return left and right;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        
        return check(root->left,root->right);
        
    }
};