/***********************************************************************************************
Problem      Remove Nth Node From End of List
Developer    Ian Hays
Date         04/18/2021
URL          https://leetcode.com/problems/remove-nth-node-from-end-of-list/
Space        O(1) 
Time         O(N)
Description  Create two pointer nodes (tail and remove). Tail traverses through list while we 
             decrement N. When N is less than zero, it is N+1 spaces away from Tail. We skip the
             node after remove and return head. If N is 0, this the node to be removed is the head
             in which we return the next node. 
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tail = head;
        ListNode* remove = head;
        
        while(tail){
            tail = tail->next;
            if(n-- < 0) remove = remove->next; 
        }
         
        if(!n) return head->next;
        remove->next = remove->next->next;
        return head;
    }
};
