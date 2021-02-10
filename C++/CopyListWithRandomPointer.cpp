//Ian Hays
//02-10-2021
//https://leetcode.com/problems/copy-list-with-random-pointer/
//SC: O(1) TC: O(N)

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        unordered_map<Node*,Node*> umap;
        
        Node* tail = head;
        Node* copy = new Node(tail->val);
        Node* res = copy;
        umap[tail] = copy;
        
        while(tail->next){
            tail = tail->next;
            copy->next = new Node(tail->val);
            copy = copy->next;
            umap[tail] = copy;
        }
        
        tail = head;
        copy = res;
        
        while(tail){
            copy->random = umap[tail->random];
            tail = tail->next;
            copy = copy->next;
        }
        return res;
    }
};
