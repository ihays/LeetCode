//Ian Hays
//01-16-2021
//https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/
//SC: O(N) TC: O(1)

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
    public TreeNode SufficientSubset(TreeNode root, int limit) {
        return dfs(root,limit,0) < limit ? null : root;
    }
    
    public int dfs(TreeNode root, int limit, int sum){
        if(root.left == null && root.right == null) return root.val + sum;       
        int l = Int32.MinValue; int r = Int32.MaxValue;
        if(root.left != null){
            l = dfs(root.left, limit, root.val + sum);  
            if(l < limit) root.left = null;
        } 
        if(root.right != null){
            r = dfs(root.right, limit, root.val + sum);  
            if(r < limit) root.right = null;
        } 
        return Math.Max(l,r);
    }
}
