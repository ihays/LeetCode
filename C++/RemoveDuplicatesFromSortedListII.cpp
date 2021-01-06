//Ian Hays
//08-26-2020
//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
//SC: O(N^2) TC: O(N^2)

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
        
        ListNode* tail = &dummy;
        while(tail->next && tail->next->next){
            if(tail->next->val == tail->next->next->val){
                int val = tail->next->val;
                while(tail->next && tail->next->val == val){
                    tail->next = tail->next->next;
                }
            } else {
                tail = tail->next;
            }
        }
        return dummy.next;
    }
};
