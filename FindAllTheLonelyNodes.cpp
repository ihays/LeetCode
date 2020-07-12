//Ian Hays
//07-12-2020
//https://leetcode.com/problems/find-all-the-lonely-nodes/
//SC: O(N) TC: O(N)

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
    vector<int> getLonelyNodes(TreeNode* root) {
        vector<int> res;
        helper(root,res);
        return res;
    }
    
    int helper(TreeNode* root, vector<int> &res){
        if(!root) return 0;
        int val1 = helper(root->left, res);
        int val2 = helper(root->right, res);
        
        if(val1 != 0 && val2 == 0) res.push_back(val1);
        if(val1 == 0 && val2 != 0) res.push_back(val2);
        return root->val;
    }
};
