/***********************************************************************************************
Problem      Binary Tree Level Order Traversal
Developer    Ian Hays
Date         07/13/2022
URL          https://leetcode.com/problems/binary-tree-level-order-traversal/
Space        O(N) 
Time         O(N)
Description  BFS through tree adding nodes from the top order down. 
************************************************************************************************/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()){
            int m = q.size();
            vector<int> level;
            while(m--){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(level);
        }
        return res;
    }
};
