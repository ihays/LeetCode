//Ian Hays 
//06-30-2020
//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
//SC: O(N) TC: O(N) - Time complexity is (binary) to the power of (binary search) : (2^log_2(N)) == N
//DFS - build BST through a binary search on an array. 

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size());
    }
    
    TreeNode* helper(vector<int>& nums, int left, int right){
        if(left == right) return NULL;
        int mid = left+(right-left)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper(nums,left, mid);
        root->right = helper(nums,mid+1, right);
        return root;
    }
        
};


