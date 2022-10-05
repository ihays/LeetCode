/***********************************************************************************************
Problem      Add One Row To Tree
Developer    Ian Hays
Date         10/04/2022
URL          https://leetcode.com/problems/add-one-row-to-tree/
Space        O(N) 
Time         O(N)
Description  Breadth First Search through tree until reaching level to add nodes. Create new left
             and right nodes equal to d, and then set the new left node's left node to original
             left node, and set new right node's right node to original right node. 
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*> q;
        q.push(root);
        if(d == 1){
            TreeNode* newRoot = new TreeNode(v);
            newRoot->left = root;
            return newRoot;
        }
        int level = 2;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                if(level == d){
                    TreeNode* right = node->right;
                    TreeNode* left = node->left;
                    node->right = new TreeNode(val);
                    node->left = new TreeNode(val);
                    node->right->right = right;
                    node->left->left = left;
                } 
            }
            level++;
        }
        return root;
    }
};
