/***********************************************************************************************
Problem      Balance A Binary Search Tree
Developer    Ian Hays
Date         02/19/2022
URL          https://leetcode.com/problems/balance-a-binary-search-tree/
Space        O(N) 
Time         O(N)
Description  DFS through tree and build a sorted array. Build a balanced BST based on sorted array
             and return.
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
    vector<int> nodes;
    TreeNode* balanceBST(TreeNode* root) {
        buildNodes(root);
        return buildBST(0, size(nodes));
    }
    
    void buildNodes(TreeNode* root){
        if(!root) return;
        buildNodes(root->left);
        nodes.push_back(root->val);
        buildNodes(root->right);
    }
    
    TreeNode* buildBST(int l, int r){
        if(l >= r) return nullptr;
        int m = (l+r)/2;
        TreeNode* root = new TreeNode(nodes[m]);
        root->left = buildBST(l, m);
        root->right = buildBST(m+1, r);
        return root;
    }
};
