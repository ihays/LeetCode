/***********************************************************************************************
Problem      Merge Two Sorted Lists
Developer    Ian Hays
Date         05/19/2021
URL          https://leetcode.com/problems/merge-two-sorted-lists/
Space        O(1) 
Time         O(N)
Description  We use tail pointer to traverse to the smaller value of l1 and l2 while pointing in
             increasing order. After the main while loop, any excess values are appended to the 
             tail and then the dummy node returns the head of the list.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while(l1 && l2){
            if(l1->val < l2->val){
                tail->next = l1;
                l1 = l1->next;
            } else{
                tail->next = l2;
                l2 = l2->next;
            } 
            tail = tail->next;
        }
        tail->next = !l1 ? l2 : l1;
        return dummy.next;
    }
};
