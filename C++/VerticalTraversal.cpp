//Ian Hays
//01-29-2021
//https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
//SC: O(N) TC: O(N) N = number of nodes

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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        map<int,vector<array<int,2>>> map;
        auto comp = [&](const array<int,2> &a, const array<int,2> &b) {return a[1] == b[1] ? a[0] < b[0] : a[1] < b[1];};
        dfs(root,map,0,0);
        for(auto it = map.begin(); it != map.end(); it++){
            vector<array<int,2>> vec = it->second;
            sort(vec.begin(),vec.end(), comp);
            vector<int> tmp;
            for(int i = 0; i < vec.size(); i++) tmp.push_back(vec[i][0]); 
            res.push_back(tmp);
        }
        return res;
    }
    void dfs(TreeNode* root, map<int,vector<array<int,2>>>& map, int x, int y){
        if(!root) return;
        map[x].push_back({root->val,y});
        dfs(root->left, map, x-1, y+1);
        dfs(root->right, map, x+1, y+1);
    }
};
