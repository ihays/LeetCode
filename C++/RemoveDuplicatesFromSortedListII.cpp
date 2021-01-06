//Ian Hays
//01-05-2021
//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
//SC: O(1) TC: O(N)

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        head = &dummy;
        while(head->next && head->next->next){
            if(head->next->val == head->next->next->val){
                int val = head->next->val;
                while(head->next && head->next->val == val){
                    head->next = head->next->next;
                }
            } else {
                head = head->next;
            }
        }
        return dummy.next;
    }
};
