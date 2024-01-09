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
   
    void inorder1(TreeNode* root,vector<int>&temp)
    {
        if(root==NULL){
            return;
        }
        inorder1(root->left,temp);
        if(root->left==NULL and root->right==NULL){
            temp.push_back(root->val);
        }
        inorder1(root->right,temp);
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {   
        vector<int>ans1;
        vector<int>ans2;
        inorder1(root1,ans1);
        inorder1(root2,ans2);
        if(ans1.size()!=ans2.size()) return false;
        int n=ans1.size();
        for(int i=0;i<n;i++)
        {
            if(ans1[i]!=ans2[i])
            {
                return false;
            }
        }
        return true;
    }
};