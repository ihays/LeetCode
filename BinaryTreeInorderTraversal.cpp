//Ian Hays
//07-05-2020
//https://leetcode.com/problems/maximum-depth-of-binary-tree/
//SC: O(N) TC: O(N)
//Iterative DFS: push into stack prioritizing left tree. build array and push on right tree.

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        while(root || !s.empty()){
            while(root){
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            res.push_back(root->val);
            root = root->right;
        }
        return res;
    }
};
