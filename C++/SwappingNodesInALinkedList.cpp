/***********************************************************************************************
Problem      Swapping Nodes in a Linked List
Developer    Ian Hays
Date         03/14/2021
URL          https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
Space        O(N) 
Time         O(N)
Description  Map indexes of list and then swap values k & size-k+1           
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
    ListNode* swapNodes(ListNode* head, int k) {
        unordered_map<int, ListNode*> umap;
        ListNode* tail = head;
        int size = 0;
        while(tail){
            size++;
            umap[size] = tail;
            tail = tail->next;
        }
        swap(umap[k]->val,umap[size-k+1]->val);
        return head;
    }
};
