/***********************************************************************************************
Problem      Intersection of Two Linked Lists
Developer    Ian Hays
Date         03/04/2021
URL          https://leetcode.com/problems/intersection-of-two-linked-lists/
Space        O(1) 
Time         O(N)
Description  iterate through each list. When A reaches end, start at head of B and vice versa. 
             check until list nodes are equal and return. 
************************************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode* tailA = headA;
        ListNode* tailB = headB;
        
        while(tailA != tailB){
            tailA = tailA->next;
            tailB = tailB->next;
            if(tailA == tailB) return tailA;
            if(tailA == NULL) tailA = headB;
            if(tailB == NULL) tailB = headA;
        }
        return tailA;
    }
};
