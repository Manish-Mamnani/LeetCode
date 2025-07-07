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
    void solve(vector<int>& v,TreeNode* root){
        if(!root) return;
        solve(v,root->left);
        v.push_back(root->val);
        solve(v,root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        solve(v,root);
        TreeNode* r = new TreeNode(v[0]);
        TreeNode* i = r;
        for(int j=1;j<v.size();j++){
            TreeNode* temp = new TreeNode(v[j]);
            i->right = temp;
            i = i->right;
        }
        return r;
    }
};