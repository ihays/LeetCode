/***********************************************************************************************
Problem      Construct Binary Tree from Preorder and Inorder Traversal
Developer    Ian Hays
Date         06/08/2021
URL          https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
Space        O(N) 
Time         O(N)
Description  Store inorder values into a map to keep track of in order indexes. We dfs placing preorder
             values in inorder locations relative to left/right/mid.
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
    unordered_map<int,int> umap;    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        for(int i = 0; i < n; i++){
            umap[inorder[i]] = i;
        }
        return dfs(0, n-1, preorder);
    }

    int index = 0;
    TreeNode* dfs(int left, int right, vector<int>& preorder){
        if(left > right) return nullptr;
        TreeNode* root = new TreeNode(preorder[index++]);
        int mid = umap[root->val];
        root->left = dfs(left, mid-1, preorder);
        root->right = dfs(mid+1, right, preorder);
        return root; 
    }
};
