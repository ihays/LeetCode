//Ian Hays
//02-10-2021
//https://leetcode.com/problems/copy-list-with-random-pointer/
//SC: O(1) TC: O(N)

/*
// Definition for a Node.
public class Node {
    public int val;
    public Node next;
    public Node random;
    
    public Node(int _val) {
        val = _val;
        next = null;
        random = null;
    }
}
*/

public class Solution {
    public Node CopyRandomList(Node head) {
        if(head == null) return null;
        Dictionary<Node,Node> dict = new Dictionary<Node,Node>();
        
        Node tail = head;
        Node copy = new Node(tail.val);
        Node res = copy;
        dict.Add(tail,copy);
        
        while(tail.next != null){
            tail = tail.next;
            copy.next = new Node(tail.val);
            copy = copy.next;
            dict.Add(tail,copy);
        }
        tail = head;
        copy = res;
        while(tail != null){
            if(tail.random != null) copy.random = dict[tail.random];
            tail = tail.next;
            copy = copy.next;
        }
        return res;
    }
}
