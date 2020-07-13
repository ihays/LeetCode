//Ian Hays
//07-13-2020
//https://leetcode.com/problems/kth-smallest-element-in-a-bst/
//SC: O(1) TC: O(N)
//modified k to be by reference. Global res to hold the value of kth smallest precisely when k becomes 0. We inorder traverse Binary Tree and each time
//we check a right branch, it means we are increasing by one. We hold the value of the k==0 node as our solution. 

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
    int res;
    int kthSmallest(TreeNode* root, int& k) {
        if(!root || k <= 0) return -1;
        kthSmallest(root->left,k);
        if(!--k) res = root->val;
        kthSmallest(root->right,k);
        return res;
    }
};
