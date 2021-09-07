/***********************************************************************************************
Problem      Reverse Linked List
Developer    Ian Hays
Date         09/07/2021
URL          https://leetcode.com/problems/reverse-linked-list/
Space        O(1) 
Time         O(N)
Description  We keep track of the previous node, and the next node reversing as we iterate to 
             the last node in the linked list and return.
************************************************************************************************/

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
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        ListNode* prev = nullptr;
        
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};
