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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> mp;
        int row = 0;
        int col = 0;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{col,row}});
        mp[col][row].push_back(root->val);
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto t = q.front();
                q.pop();
                int r = t.second.second;
                int c = t.second.first;
                if(t.first->left){
                    q.push({t.first->left,{c-1,r+1}});
                    mp[c-1][r+1].push_back(t.first->left->val);
                }
                if(t.first->right){
                    q.push({t.first->right,{c+1,r+1}});
                    mp[c+1][r+1].push_back(t.first->right->val);
                }
            }
        }
        vector<vector<int>> res;
        for(auto [col,rowmp] : mp){
            vector<int> v;
            for(auto [row,vec] : rowmp){
                sort(vec.begin(),vec.end());
                v.insert(v.end(),vec.begin(),vec.end());
            }
            res.push_back(v);
        }
        return res;
    }
};