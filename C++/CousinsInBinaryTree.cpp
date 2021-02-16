//Ian Hays
//02-15-2021
//https://leetcode.com/problems/cousins-in-binary-tree/
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
