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
    map<long long int,int>mp;
    void inorder(TreeNode* root, int tar,long long int sum){
        if(!root){
            return ;
        }
        sum+=root->val;
        if(sum==tar){
            count++;
        }
        
        if(mp.find(sum-tar)!=mp.end()){
            count+=mp[sum-tar];
        }
        mp[sum]++;
        inorder(root->left,tar,sum);
        inorder(root->right,tar,sum);   
        mp[sum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        inorder(root,targetSum,0);
        return count;
    }
};