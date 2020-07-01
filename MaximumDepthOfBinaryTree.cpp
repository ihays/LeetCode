
//Ian Hays
//06-30-2020
//https://leetcode.com/problems/maximum-depth-of-binary-tree/
//SC: O(1) TC: O(N)
//DFS - return max level through depth first search of binary tree

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
    int maxDepth(TreeNode* root) {
        return helper(root,0);
    }
    
    int helper(TreeNode* root, int level){
        if(root == nullptr) return level;
        return max(helper(root->left, level+1),helper(root->right,level+1));
    }
};
