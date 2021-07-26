/***********************************************************************************************
Problem      Two Sum BSTs
Developer    Ian Hays
Date         07/26/2021
URL          https://leetcode.com/problems/two-sum-bsts/
Space        O(N) 
Time         O(N)
Description  DFS through first tree and insert into set the difference of target and the node value. 
             DFS through second tree and return true if node in set is found, otherwise false. 
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
    unordered_set<int> uset;
    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        dfsInsert(root1,target);
        return dfsFind(root2);
    }
    
    void dfsInsert(TreeNode* root1, int target){
        if(!root1) return;
        uset.insert(target - root1->val);
        dfsInsert(root1->left, target);
        dfsInsert(root1->right, target);
    }
    bool dfsFind(TreeNode* root2){
        if(!root2) return false;
        if(uset.count(root2->val)) return true;
        return dfsFind(root2->left) ||  dfsFind(root2->right);
    }
};
