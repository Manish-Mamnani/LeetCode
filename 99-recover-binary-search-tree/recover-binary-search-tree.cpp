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
    void inorder(TreeNode* root,vector<int>& v){
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    void swapp(TreeNode* root,TreeNode*& first,TreeNode*& second,int f,int s){
        if(!root) return;
        if(root->val==f) first = root;
        if(root->val==s) second = root;
        swapp(root->left,first,second,f,s);
        swapp(root->right,first,second,f,s);
    }
    void recoverTree(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        int f = 0;
        int s = 0;
        bool t = false;
        for(int i=1;i<v.size();i++){
            if(!t && v[i]<v[i-1]){
                t = true;
                f = v[i-1];
            }
            if(v[i]<v[i-1]){
                s = v[i];
            }
        }
        TreeNode* first = NULL;
        TreeNode* second = NULL;
        swapp(root,first,second,f,s);
        if(first && second){
            swap(first->val,second->val);
        }
    }
};