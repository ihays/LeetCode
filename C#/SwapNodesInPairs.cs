//Ian Hays
//12-16-2020
//https://leetcode.com/problems/swap-nodes-in-pairs/
//SC: O(1) TC: O(N)

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
    public ListNode SwapPairs(ListNode head) {
        if(head == null || head.next == null) return head;
        
        //initialize nodes
        ListNode l1 = head;
        ListNode l2 = l1.next;
        ListNode l3 = l2.next;
        head = head.next; 

        //assign nodes
        while(l3 != null){
            l2.next = l1;
            if(l3.next != null){
                l1.next = l3.next;
                l1 = l3;
                l2 = l1.next;
                l3 = l2.next;
            } else {
                l1.next = l3;
                return head;
            }
        } 
        l2.next = l1;
        l1.next = null;
        return head;
    }
}
