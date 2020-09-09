  
//Ian Hays
//07-06-2020
//https://leetcode.com/problems/arranging-coins/
//SC: O(1) TC: O(N)
//build left tree using preorder until end node is reached by comparing preorder and inorder while storing nodes to stack. 
//Pop off stack until root node is found, and then create a new root node to the right. Repeat until tree is built.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() || inorder.empty()) return NULL;
        stack<TreeNode*> s;
        TreeNode* root = new TreeNode(preorder[0]);
        s.push(root);
        int index = 0;
        for(int i = 1; i < preorder.size(); i++){
            TreeNode* node = s.top();
            if(node->val != inorder[index]){
                node->left = new TreeNode(preorder[i]);
                s.push(node->left);
            } else {
                while(!s.empty() && s.top()->val == inorder[index]){
                    node = s.top();
                    s.pop();
                    index++;
                }
                node->right = new TreeNode(preorder[i]);
                s.push(node->right);
            }
        }
        return root;
    }
};
