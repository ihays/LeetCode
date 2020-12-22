//Ian Hays
//12-22-2020
//https://leetcode.com/problems/path-sum/
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
    public bool HasPathSum(TreeNode root, int sum) {
        if(root == null) return false;
        bool res = false;
        dfs(root,sum, ref res);
        return res;
    }
    void dfs(TreeNode root, int sum, ref bool res){
        if(res == true) return;
        if(root.left == null && root.right == null){
            if(sum == root.val){
                res = true;
            } 
            return;
        }
        if(root.left != null) dfs(root.left, sum-root.val, ref res);
        if(root.right != null) dfs(root.right, sum-root.val, ref res);      
    }
}
