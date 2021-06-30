/***********************************************************************************************
Problem      Lowest Common Ancestor of a Binary Tree
Developer    Ian Hays
Date         06/30/2021
URL          https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
Space        O(1)
Time         O(N)
Description  DFS through binary tree in search of p and q nodes. When found, base case will return
             the node. If not, we return the nodes found in the left subtree, or right subtree or
             the root if both are found. 
************************************************************************************************/
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root->val == p->val || root->val == q->val) return root;
        TreeNode* l = lowestCommonAncestor(root->left, p, q);
        TreeNode* r = lowestCommonAncestor(root->right, p, q);
        return l ? r ? root : l : r;
    }
};
