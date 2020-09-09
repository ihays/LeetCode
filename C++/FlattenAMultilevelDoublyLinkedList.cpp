//Ian Hays
//07-10-2020
//https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
//SC: O(1) TC: O(N^2)

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {

        while(true){
            Node* tail = head;
            while(tail && !tail->child){
                tail = tail->next;
            }
            if(!tail) break;            
            
            Node* tmp = tail->next; 
            tail->next = tail->child;
            tail->child->prev = tail;
            tail->child = NULL;
            
            while(tail->next){
                tail = tail->next;
            }
            tail->next = tmp;
            if(tmp) tmp->prev = tail;
        }

        return head;
    }
};
