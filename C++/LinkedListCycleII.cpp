//Ian Hays
//01-18-2021
//https://leetcode.com/problems/linked-list-cycle-ii/
//SC: O(1) TC: O(N)

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
        ListNode *l1 = head;
        ListNode *l2 = head;
        while(l2->next && l2->next->next){
            l1 = l1->next;
            l2 = l2->next->next;
            if(l1 == l2){
                l2 = head;
                while(l1 != l2){
                    l1 = l1->next;
                    l2 = l2->next;
                }
                return l1;
            }
        }

        return NULL;
    }
};
