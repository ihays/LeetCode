/***********************************************************************************************
Problem      Maximum Depth of N-ary Tree
Developer    Ian Hays
Date         02/26/2021
URL          https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
Space        O(1) 
Time         O(N)
Description  Dfs through each child of the tree returning the maximum depth.            
************************************************************************************************/


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        
        if(!root) return 0;
        return dfs(root, 1);
    }
    
    int dfs(Node* root, int depth){
        int res = depth;
        for(int i = 0; i < root->children.size(); i++){
            res = max(dfs(root->children[i], depth+1), res);
        }
        return res;
    }
};