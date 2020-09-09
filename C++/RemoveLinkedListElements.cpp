  
//Ian Hays
//07-09-2020
https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return nullptr;
        ListNode* tail = head;
        ListNode* prev = nullptr;
        
        while(tail->next){
            prev = tail;
            tail = tail->next;
            if(tail && tail->val == val){
                prev->next = tail->next;
                tail = prev;
            }
        }
        return (head && head->val == val) ? head->next : head;
    }
};
