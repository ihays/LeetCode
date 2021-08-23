/***********************************************************************************************
Problem      Populating Next Right Pointers in Each Node
Developer    Ian Hays
Date         08/22/2021
URL          https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
Space        O(N) 
Time         O(N)
Description  BFS through tree linking next sibling nodes. 
************************************************************************************************/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                Node* node = q.front();
                q.pop();
                if(i < size-1) node->next = q.front();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        
        return root;
    }
};
