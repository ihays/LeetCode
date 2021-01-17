//Ian Hays
//01-16-2021
//https://leetcode.com/problems/count-complete-tree-nodes/
//SC: O(1) TC: O(N)

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
    int countNodes(TreeNode* root) {     
        return root ? 1 + (root->left ? countNodes(root->left): 0) + (root->right ? countNodes(root->right): 0)  : 0;
    }
}
