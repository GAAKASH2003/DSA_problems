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
class BSTIterator {
public:
    vector<int>ans;
    int ind=0;
    int n=0;
    void in(TreeNode*root){
        if(!root) return;
        in(root->left);
        ans.push_back(root->val);
        in(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        in(root);
        n=ans.size();
        
    }
    
    int next() {
        int t=ind;
        ind++;
        return ans[t]; 
    }
    
    bool hasNext() {
        if(ind==n) return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */