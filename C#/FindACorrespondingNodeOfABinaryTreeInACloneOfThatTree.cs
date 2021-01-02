//Ian Hays
//01-02-2021
//https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
//SC: O(1) TC: O(N)

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */

public class Solution {
    public TreeNode GetTargetCopy(TreeNode original, TreeNode cloned, TreeNode target) {
        if(original == null) return null;
        if(original == target) return cloned;
        TreeNode l = GetTargetCopy(original.left, cloned.left, target);
        TreeNode r = GetTargetCopy(original.right, cloned.right, target);
        return l == null ? r : l;
    }
}
