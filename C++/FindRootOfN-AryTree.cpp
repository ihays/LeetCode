//Ian Hays
//07-14-2020
//https://leetcode.com/problems/find-root-of-n-ary-tree/
//SC: O(1) TC: O(N)
//Using the XOR operator to cancel non-root nodes (node will appear twice as a child and parent it's not a root) leaving only the root's address.

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
    Node* findRoot(vector<Node*> tree) {
        long long sum = 0;
        for(int i = 0; i < tree.size(); i++){
            sum ^= (long long) tree[i];
            for(int j = 0; j < tree[i]->children.size(); j++){
                sum ^= (long long) tree[i]->children[j];
            }
        }
    
        return (Node*) sum;
    }
};
