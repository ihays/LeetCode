//Ian Hays
//01-24-2021
//https://leetcode.com/problems/merge-k-sorted-lists/
//SC: O(N) TC: O(N)

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 0; i < lists.size(); i++){
            ListNode* l = lists[i];
            while(l){
                q.push(l->val);
                l = l->next;
            }
        }
        if(q.empty()) return nullptr;        
        
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while(!q.empty()){
            tail->next = new ListNode(q.top());
            tail = tail->next;
            q.pop();
        }
        return dummy.next;
    }
};
