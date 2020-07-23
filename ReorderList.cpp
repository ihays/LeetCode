
//Ian Hays
//07-23-2020
//https://leetcode.com/problems/reorder-list/
//SC: O(N) TC: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return;
        ListNode* p1 = head;
        ListNode* p2 = head;
        
        //find middle of list or greater of the middle for p1
        while(p2 && p2->next){
            p1 = p1->next;
            p2 = p2->next->next;
        }
        //separate the right of the middle into a separate list
        p2 = p1->next;
        p1->next = NULL;
        p1 = p2;
        p2 = p2->next;
        p1->next = NULL;
        ListNode* p3 = p2;
        
        //reverse the right of middle
        while(p2){
            p2 = p2->next;
            p3->next = p1;
            p1 = p3;
            p3 = p2;
        }
        ListNode* p4;
        
        //merge lists
        p2 = head;
        while(p1){
            p3 = p2->next;
            p4 = p1->next;
            p2->next = p1;
            p1->next = p3;
            p2 = p3;
            p1 = p4;
        }
           
        return;
        
    }
};

