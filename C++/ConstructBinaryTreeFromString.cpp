/***********************************************************************************************
Problem      Construct Binary Tree from String
Developer    Ian Hays
Date         03/20/2021
URL          https://leetcode.com/problems/construct-binary-tree-from-string/
Space        O(N) 
Time         O(N)
Description  Dfs through string building binary tree.           
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
    TreeNode* str2tree(string s) {
        int index = 0;
        return s.size() == 0 ? nullptr : dfs(index, s);
    }
    
    TreeNode* dfs(int& index, string& s){
        int start = index;
        while(isdigit(s[index]) || s[index] == '-'){
            index++;
        }
        int val = stoi(s.substr(start, index-start+1));
        
        TreeNode* node = new TreeNode(val);
        if(s[index] == '('){
            node->left = dfs(++index, s);  
            index++;
            
        }
        if(s[index] == '('){
            node->right = dfs(++index, s); 
            index++;
             
        } 
        return node;
    }
};
