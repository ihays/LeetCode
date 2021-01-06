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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        unordered_map<int,int> umap;
        vector<int> duplicate;
        
        ListNode* tail = dummy.next;
        
        while(tail){
            if(++umap[tail->val] == 2) duplicate.push_back(tail->val);
            tail = tail->next;        
        }
        tail = &dummy;
        
        for(int i = 0; i < duplicate.size(); i++){
            while(tail->next && tail->next->val != duplicate[i]){
                tail = tail->next;
            }
            while(tail->next && tail->next->val == duplicate[i]){
                tail->next = tail->next->next;
            }
        }
        
        return dummy.next;
        
    }
};
