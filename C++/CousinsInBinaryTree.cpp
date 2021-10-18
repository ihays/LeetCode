/***********************************************************************************************
Problem      Cousins in Binary Tree
Developer    Ian Hays
Date         10/17/2021
URL          https://leetcode.com/problems/cousins-in-binary-tree/
Space        O(N) 
Time         O(N)
Description  BFS or DFS through tree to find cousins
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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            int found = 0;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->val == x) found += 2;
                if(node->val == y) found += 1;
                if(node->left && node->right && ((x == node->left->val && y == node->right->val) || (y == node->left->val && x == node->right->val))) return false;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(found == 3) return true;
        }
        return false;
    }

};

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
    bool isCousins(TreeNode* root, int x, int y) {
        vector<int> a = dfs(root, x, 0, 0);
        vector<int> b = dfs(root, y, 0, 0);
        return a[0] != b[0] && a[1] == b[1];
    }
    
    vector<int> dfs(TreeNode* root, int z, int level, int p){
        if(!root) return vector<int>();
        if(root->val == z) return {p, level};
        vector<int> res = dfs(root->left, z, level+1, root->val);
        return res.empty() ? dfs(root->right, z, level+1, root->val) : res;
    }
    
};
