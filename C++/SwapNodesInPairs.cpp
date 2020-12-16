//Ian Hays
//12-16-2020
//https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        
        //initialize nodes
        ListNode* l1 = head;
        ListNode* l2 = l1->next;
        ListNode* l3 = l2->next;
        head = head->next; 

        //assign nodes
        while(l3){
            l2->next = l1;
            if(l3->next){
                l1->next = l3->next;
                l1 = l3;
                l2 = l1->next;
                l3 = l2->next;
            } else {
                l1->next = l3;
                return head;
            }
        } 
        l2->next = l1;
        l1->next = NULL;
        return head;
    }
};
