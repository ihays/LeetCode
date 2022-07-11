/***********************************************************************************************
Problem      Merge Two Sorted Lists
Developer    Ian Hays
Date         07/11/2021
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        
        while(list1 && list2){
            if(list1->val < list2->val){
                tail->next = list1;  
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        
        tail->next = list1 ? list1 : list2;
        
        return dummy.next;
    }
};
