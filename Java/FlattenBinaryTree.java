/***********************************************************************************************
Problem      Flatten Binary Tree
Developer    Ian Hays
Date         07/27/2022
URL          https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
Space        O(N) 
Time         O(N)
Description  Store inorder nodes into a queue, and rebuild binary tree into linked list by setting
             nodes to right and null to left. 
************************************************************************************************/
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void flatten(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        inOrder(root, q);
        TreeNode dummy = new TreeNode(0);
        while(!q.isEmpty()){
            dummy.right = q.peek();
            dummy.left = null;
            q.remove();
            dummy = dummy.right;
        }
    }
    
    public void inOrder(TreeNode root, Queue<TreeNode> q){
        if(root == null) return;
        q.add(root);
        inOrder(root.left, q);
        inOrder(root.right, q);
    }
}
