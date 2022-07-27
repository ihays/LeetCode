/***********************************************************************************************
Problem      Merge Two Sorted Lists
Developer    Ian Hays
Date         07/27/22
URL          https://leetcode.com/problems/merge-two-sorted-lists/
Space        O(1) 
Time         O(N)
Description  Using a dummy and tail, traverse through both sorted lists pointing to the least value
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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode dummy = new ListNode(0);
        ListNode tail = dummy;
        while(list1 != null && list2 != null){
            if(list1.val < list2.val){
                tail.next = list1;
                list1 = list1.next;
            } else {
                tail.next = list2;
                list2 = list2.next;
            }
            tail = tail.next;
        }
        
        tail.next = list1 != null ? list1: list2;
        return dummy.next;
    }
}
