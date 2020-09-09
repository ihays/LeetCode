//Ian Hays
//07-23-2020
//https://leetcode.com/problems/binary-tree-right-side-view/
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int m = q.size();
            res.push_back(q.front()->val);
            for(int i = 0; i < m; i++){
                TreeNode* tmp = q.front();
                q.pop();
                if(tmp->right) q.push(tmp->right);
                if(tmp->left) q.push(tmp->left);

            }
        }
        return res;
    }
};
