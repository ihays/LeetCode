/***********************************************************************************************
Problem      Delete Node in a BST
Developer    Ian Hays
Date         11/21/2021
URL          https://leetcode.com/problems/delete-node-in-a-bst/
Space        O(1) 
Time         O(N)
Description  Traverse through tree until you find node to delete. If it has a right node, we want 
             to swap the value with the smallest node value in the right subtree. If the right node
             doesn't exist and we find the node to delete, we return the left subtree for the root. 
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val == key){
            if(root->right){
                TreeNode* right = root->right;
                while(right->left)
                    right = right->left;
                swap(root->val, right->val);
            } else {
                TreeNode* left = root->left;
                delete(root);
                return left;
            }
        }
        root->left = deleteNode(root->left, key);
        root->right = deleteNode(root->right, key);
        return root;
    }
    
};
