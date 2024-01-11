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
    int res=INT_MIN;

    void inorder(TreeNode* root){
        if(root!=NULL){
            inorder(root->left);
            int mi=INT_MAX,ma=INT_MIN;
            rec(root,mi,ma);
            inorder(root->right);
        }
    }
    void rec(TreeNode* root,int mi,int ma){
        if(root->left==NULL and root->right==NULL){
            mi=min(mi,root->val); 
            ma=max(ma,root->val);
            cout<<mi<<" "<<ma<<endl;
            res=max(res,ma-mi);
            return;
        }
        if(root->left){
              mi=min(mi,root->val); 
              ma=max(ma,root->val);
            rec(root->left,mi,ma);
        }
        if(root->right){
            mi=min(mi,root->val); 
            ma=max(ma,root->val); 
            rec(root->right,mi,ma);
        }
    }
    int maxAncestorDiff(TreeNode* root) {
        inorder(root);
        return res;
    }
};