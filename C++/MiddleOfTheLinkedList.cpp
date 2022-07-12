/***********************************************************************************************
Problem      Middle Of The Linked List
Developer    Ian Hays
Date         07/12/2022
URL          https://leetcode.com/problems/middle-of-the-linked-list/
Space        O(1) 
Time         O(N)
Description  Using a fast and slow pointer, traverse through the linked list to find the middle.
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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            head = head->next;
        }
        return head;
    }
};
