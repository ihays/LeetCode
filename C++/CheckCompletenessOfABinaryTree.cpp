/***********************************************************************************************
Problem      Check Completeness Of A Binary Tree
Developer    Ian Hays
Date         11/06/2021
URL          https://leetcode.com/problems/check-completeness-of-a-binary-tree/
Space        O(N) 
Time         O(N) 
Description  Store sequence count for each index based on difference in a dp vector. We return
             the greatest value.
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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        bool end = false;
        while(!q.empty()){
            int m = q.size();
            for(int i = 0; i < m; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    if(end) return false;
                    q.push(node->left);
                } else {
                    end = true;
                }
                if(node->right){
                    if(end) return false;
                    q.push(node->right);
                } else {
                    end = true;
                }
            }
        }
        return true;
    }
};
