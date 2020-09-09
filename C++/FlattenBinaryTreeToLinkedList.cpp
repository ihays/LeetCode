//Ian Hays
//07-23-2020
//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
//SC: O(N) TC: O(N)
//Recursively DFS through tree adding to queue and setting left and right nodes to NULL. Pop through queue rebuilding tree.

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
    void flatten(TreeNode* root) {
        queue<TreeNode*> q;
        helper(root,q);
        TreeNode* dummy = new TreeNode(0);
        while(!q.empty()){
            dummy->right = q.front();
            q.pop();
            dummy = dummy->right;
        }
        
    }
    
    void helper(TreeNode* root, queue<TreeNode*>& q){
        if(!root) return;
        q.push(root);
        helper(root->left, q);
        helper(root->right, q);
        root->left = NULL;
        root->right = NULL;
    }
};
