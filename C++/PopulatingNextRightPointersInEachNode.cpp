//Ian Hays
//07-12-2020
//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
//SC: O(N) TC: O(N)

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
        if(!root) return root;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int m = q.size();
            Node* prev = NULL;
            for(int i = 0; i < m; i++){
                Node* node = q.front();
                q.pop();
                node->next = prev;
                prev = node;
                if(node->right) q.push(node->right);
                if(node->left) q.push(node->left);
            }
        }
        return root;
    }
};
