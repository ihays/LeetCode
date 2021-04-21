/***********************************************************************************************
Problem      N-ary Tree Preorder Traversal
Developer    Ian Hays
Date         04/20/2021
URL          https://leetcode.com/problems/n-ary-tree-preorder-traversal/
Space        O(N) 
Time         O(N)
Description  DFS through tree pushing values to result vector.        
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
    vector<int> res;
    vector<int> preorder(Node* root) {
        dfs(root);
        return res;
    }
    
    void dfs(Node* root){
        if(!root) return;
        res.push_back(root->val);
        vector<Node*> children = root->children;
        for(int i = 0; i < children.size(); i++){
            dfs(children[i]);    
        }
    }
};
