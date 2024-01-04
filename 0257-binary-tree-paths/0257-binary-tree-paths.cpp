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
    string funi(vector<int>path){
        string ans="";
        int n=path.size();
        for(int i=0;i<n;i++){
            if(i==n-1){
                ans+=to_string(path[i]);
            }
            else{
                ans+=to_string(path[i])+"->";
            }
        }
        return ans;
    }
    void fun(TreeNode*root,vector<int>&path,vector<string>&paths){
        if(root==NULL){
            return;
        }
        path.push_back(root->val);
        if(!root->left and !root->right){
            paths.push_back(funi(path));
        }
        fun(root->left,path,paths);
        fun(root->right,path,paths);
        path.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        vector<int>path;
        fun(root,path,paths);
        return paths;
    }
};