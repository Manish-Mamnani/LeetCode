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
    vector<string> v;
    void solve(TreeNode* root,string s){
        if(!root) return;
        if(!root->left && !root->right){
            s+="->"+to_string(root->val);
            v.push_back(s);
        }
        s+="->"+to_string(root->val);
        solve(root->left,s);
        solve(root->right,s); 
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root->left && !root->right){
            v.push_back(to_string(root->val));
            return v;
        }
        solve(root->left,to_string(root->val));
        solve(root->right,to_string(root->val));
        return v;
    }
};