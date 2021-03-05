/***********************************************************************************************
Problem      Average of Levels in a Binary Tree
Developer    Ian Hays
Date         03/05/2021
URL          https://leetcode.com/problems/average-of-levels-in-binary-tree/
Space        O(N) 
Time         O(N)
Description  BFS each level and record a rolling sum. Divided the rolling sum by the size of the 
             queue and push into the result.
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double size = q.size();
            double sum = 0;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(sum/size);
        }
        return res;
   }
};
