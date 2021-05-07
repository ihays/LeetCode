/***********************************************************************************************
Problem      Convert Sorted List to Binary Search Tree
Developer    Ian Hays
Date         05/06/2021
URL          https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
Space        O(1) 
Time         O(N)
Description  We binary search using fast/slow pointer to determine mid value. Mid value becomes
             root node. Left becomes the binary search result of list values to the left of mid.
             Right becomes the binary search result of list values to the right of mid.
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return buildBST(head,NULL);
    }
    
    TreeNode* buildBST(ListNode* head, ListNode* tail){
        if(tail == head){
            return NULL;
        }
        
        if(head->next == tail){
            TreeNode* node = new TreeNode(head->val);
            return node;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != tail && fast->next != tail){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        TreeNode* root = new TreeNode(slow->val);
        root->left = buildBST(head, slow);
        root->right = buildBST(slow->next, tail);
        return root;
    }
};
