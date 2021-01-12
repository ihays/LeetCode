//Ian Hays
//01-12-2021
//https://leetcode.com/problems/add-two-numbers/
//SC: O(N^2) TC: O(N^2)

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(0);
        ListNode tail = dummy;
        int carry = 0;
        while(l1 != null || l2 != null){
            tail.next = new ListNode(0);
            int val1 = 0;
            int val2 = 0;
            if(l1 != null){
                val1 = l1.val;
                l1 = l1.next;
            }
            if(l2 != null){
                val2 = l2.val;
                l2 = l2.next;
            }
            int sum = val1 + val2 + carry;
            carry = sum > 9 ? 1 : 0;
            tail.next.val = sum%10;
            tail = tail.next;
        }
        if(carry == 1) tail.next = new ListNode(1);
        return dummy.next;
    }
}
