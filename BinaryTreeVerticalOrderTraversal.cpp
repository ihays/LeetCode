//Ian Hays
//07-26-2020
//https://leetcode.com/problems/binary-tree-vertical-order-traversal/
//SC: O(N^2) TC: O(N)

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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        
        map<int,vector<int>> map;
        queue<pair<int,TreeNode*>> q;
        
        q.push(make_pair(0,root));
        map[0].push_back(root->val);
        
        while(!q.empty()){
            int m = q.size();
            for(int i = 0; i < m; i++){
                pair<int,TreeNode*> pair = q.front();
                q.pop();
                TreeNode* left = pair.second->left;
                TreeNode* right = pair.second->right;
                int level = pair.first;

                if(left){
                    map[level-1].push_back(left->val);
                    q.push(make_pair(level-1,left));  
                } 
                if(right){
                    map[level+1].push_back(right->val);
                    q.push(make_pair(level+1,right));
                }
            }
        }
        for(auto it: map){
            res.push_back(it.second);
        }
        return res;
    }

};
