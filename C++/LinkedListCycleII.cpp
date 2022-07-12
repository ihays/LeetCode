/***********************************************************************************************
Problem      Linked List Cycle II
Developer    Ian Hays
Date         07/12/2022
URL          https://leetcode.com/problems/linked-list-cycle-ii/
Space        O(1) 
Time         O(N)
Description  Using an entry, fast, slow pointers determine where the fast and slow meet. Use entry
             to meet the fast pointer by iterating through one node at a time to find where the linked
             list cycles. 
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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* entry = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(fast != entry){
                    fast = fast->next;
                    entry = entry->next;
                }  
                return fast;
            }
        }
        return NULL;
    }
};
