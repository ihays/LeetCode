//Ian Hays
//07-09-2020
//https://leetcode.com/problems/maximum-width-of-binary-tree/
//SC: O(N^2) TC: O(V*E)
//BFS through tree and find the difference between the end node, and begin node looking at the queue. Location index is stored in a hash map based on Tree address.
//If the size of the queue is ever 1, we reset the location index to 1 to prevent integer overflow. indexes are based on multiplying by 2 for left tree, and multiply
//by 2 and add 1 for right tree.

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
    int widthOfBinaryTree(TreeNode* root) {
        int res = 0;
        if(!root) return 0;
        unordered_map<TreeNode*, int> umap;
        queue<TreeNode*> q;
        
        q.push(root);
        umap[root] = 0;

        while(!q.empty()){
            int m = q.size();
            if(m == 1) umap[q.front()] = 1;
            res = max(res, umap[q.back()] - umap[q.front()] + 1);
            for(int i = 0; i < m; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    umap[node->left] = umap[node]*2;
                    q.push(node->left);
                }
                if(node->right){
                    umap[node->right] = umap[node]*2+1;
                    q.push(node->right);
                }
            }
        }
        return res;
    }
};
