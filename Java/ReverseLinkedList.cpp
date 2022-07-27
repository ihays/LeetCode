/***********************************************************************************************
Problem      Reverse Linked List
Developer    Ian Hays
Date         07/27/22
URL          https://leetcode.com/problems/reverse-linked-list/
Space        O(1) 
Time         O(N)
Description  Using a previous pointer build the result by pointing to nodes in descending order
************************************************************************************************/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode ans = null;
        ListNode prev = head;
        while(head != null){
            head = head.next;
            prev.next = ans;
            ans = prev;
            prev = head;
        }
        return ans;
    }
}
