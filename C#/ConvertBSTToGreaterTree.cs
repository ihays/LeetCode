//Ian Hays
//02-09-2021
//https://leetcode.com/problems/convert-bst-to-greater-tree/
//SC: O(1) TC: O(N)

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public int sum = 0;
    public TreeNode ConvertBST(TreeNode root) {
        if(root == null) return null;
        ConvertBST(root.right);
        root.val += sum;
        sum = root.val;
        ConvertBST(root.left);
        return root;
    }
}
