//Ian Hays
//07-02-2020
//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
//SC: O(V) TC: O(V+E)
//Iterative BFS through tree to add each level to 2D vector. Reverse vector to to show the bottom up level order.

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        res.size();
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int m = q.size();
            vector<int> tmp;
            for(int i = 0; i < m; i++){
                TreeNode* node = q.front();
                tmp.push_back(node->val);
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(tmp);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
