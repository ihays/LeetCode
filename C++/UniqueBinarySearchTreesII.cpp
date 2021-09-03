/***********************************************************************************************
Problem      Unique Binary Search Trees II
Developer    Ian Hays
Date         09/02/2021
URL          https://leetcode.com/problems/unique-binary-search-trees-ii/
Space        O(N^2) 
Time         O(N^2)
Description  We build left and right side of trees for each permutation using recursion. 
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
    vector<TreeNode*> generateTrees(int n, int s = 1) {
        vector<TreeNode*> res;
        if(s > n) return {NULL};
        for(int node = s; node <= n; node++){
            for(auto left: generateTrees(node-1, s)){
                for(auto right: generateTrees(n, node+1)){
                    TreeNode* tree = new TreeNode(node);
                    tree->left = left;
                    tree->right = right;
                    res.push_back(tree);
                }
            }    
        }
        return res;
    }
};
