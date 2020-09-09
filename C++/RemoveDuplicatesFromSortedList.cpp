//Ian Hays
//07-21-2020
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
        ListNode* tail = head;
        
        while(tail){
            if(tail->next && tail->val == tail->next->val){
                tail->next = tail->next->next;
            } else {
                tail = tail->next;
            }
        }
        return head;
    }
};
