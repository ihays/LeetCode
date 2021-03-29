/***********************************************************************************************
Problem      Flip Binary Tree To Match Preorder Traversal
Developer    Ian Hays
Date         03/29/2021
URL          https://leetcode.com/problems/flip-binary-tree-to-match-preorder-traversal/
Space        O(N) 
Time         O(N)
Description  Traverse through binary tree adding index of node to result where swaps are needed to 
             match the voyage vector. If a node doesn't match the voyage vector, we return false 
             for the return value to be -1. 
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
    vector<int> res;
    int index = 0;
    
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        return dfs(root,voyage) ? res : vector<int>{-1};
    }
    
    bool dfs(TreeNode* root, vector<int>& voyage){
        if(!root) return true;
        if(root->val != voyage[index++]){
            return false;
        }
        if(root->left && root->left->val != voyage[index]){
            res.push_back(root->val);
            swap(root->left, root->right);      
        } 
        return dfs(root->left, voyage) && dfs(root->right, voyage);
    }
};

