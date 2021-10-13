/***********************************************************************************************
Problem      Construct Binary Search Tree From Preorder Traversal
Developer    Ian Hays
Date         10/13/2021
URL          https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/
Space        O(1) 
Time         O(N)
Description  Recursively build tree by building left until value exceeds the new bound and then
             build right within a bound.  
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return buildTree(preorder, index, INT_MAX);
    }
    TreeNode* buildTree(vector<int>& preorder, int& index, int bound){
        if(index >= size(preorder) || preorder[index] > bound) return nullptr;
        TreeNode* root = new TreeNode(preorder[index++]);
        root->left = buildTree(preorder, index, root->val);
        root->right = buildTree(preorder, index, bound);
        return root;
    }
}; 
