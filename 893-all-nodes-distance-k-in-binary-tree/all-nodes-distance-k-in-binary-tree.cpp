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
    void dis(TreeNode* r,int c,int k,vector<int>& ans){
        if(c>k || r==NULL) return;
        if(c==k) ans.push_back(r->val);
        c++;
        dis(r->left,c,k,ans);
        dis(r->right,c,k,ans);
    }
    int dfs(TreeNode* node, TreeNode* target, int k, vector<int>& ans) {
        if (!node) return -1;

        if (node == target) {
            dis(node, 0, k, ans);
            return 1; 
        }

        int left = dfs(node->left, target, k, ans);
        if (left != -1) {
            if (left == k) ans.push_back(node->val); 
            else dis(node->right, left + 1, k, ans); 
            return left + 1;
        }

        int right = dfs(node->right, target, k, ans);
        if (right != -1) {
            if (right == k) ans.push_back(node->val);
            else dis(node->left, right + 1, k, ans);
            return right + 1;
        }

        return -1; 
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        dfs(root,target,k,ans);
        return ans;
    }
};