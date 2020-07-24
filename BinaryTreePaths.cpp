//Ian Hays
//07-23-2020
//https://leetcode.com/problems/binary-tree-paths/
//SC: O(N^2) TC: O(N)

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        helper(root,res,"");
        return res;
    }
    
    void helper(TreeNode* root, vector<string>& res, string path){
        if(!root) return;
        path += path.empty() ? to_string(root->val) : "->" + to_string(root->val);
        helper(root->left, res, path);
        helper(root->right, res, path);
        if(!root->left && !root->right) res.push_back(path);
    }
};
