/***********************************************************************************************
Problem      Middle Of The Linked List
Developer    Ian Hays
Date         07/27/22
URL          https://leetcode.com/problems/middle-of-the-linked-list/
Space        O(1) 
Time         O(N)
Description  using a slow/fast pointer, return slow when fast pointer reaches end of list.
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
    public ListNode middleNode(ListNode head) {
        ListNode fast = head;
        
        while(fast != null && fast.next != null){
            head = head.next;
            fast = fast.next.next;
        }
        
        return head;
    }
}
