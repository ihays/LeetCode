//Ian Hays
//01-24-2021
//https://leetcode.com/problems/merge-k-sorted-lists/
//SC: O(N) TC: O(NLOGN)

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
    public ListNode MergeKLists(ListNode[] lists) {
        List<int> list = new List<int>();
        for(int i = 0; i < lists.Length; i++){
            ListNode l = lists[i];
            while(l != null){
                list.Add(l.val);
                l = l.next;
            }
        }
        if(list.Count == 0) return null;
        
        List<int> sorted = list.OrderBy(x => x).ToList();
        
        ListNode tail = new ListNode();
        ListNode dummy = tail;
        
        foreach(int val in sorted){
            tail.next = new ListNode(val);
            tail = tail.next;
        }
        return dummy.next;
    }
}


