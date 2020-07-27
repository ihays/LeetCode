//Ian Hays
//07-26-2020
//https://leetcode.com/problems/convert-binary-search-tree-to-sorted-doubly-linked-list/
//SC: O(N) TC: O(N)

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/

class Solution {
public:
    Node* treeToDoublyList(Node* root) {
        if(!root) return root;
        queue<Node*> q;
        helper(root, q);
        Node* tail = q.front();
        root = tail;
        q.pop();
        while(!q.empty()){
            Node* tmp = tail;
            tail->right = q.front();
            tail = tail->right;
            tail->left = tmp;
            q.pop();
        }
        root->left = tail;
        tail->right = root;
        

        return root;
    }
   
    void helper(Node* root, queue<Node*>& q){
        if(root == NULL) return;
        helper(root->left, q);
        q.push(root);
        helper(root->right, q);
        root->left = NULL;
        root->right = NULL;
    }
};
