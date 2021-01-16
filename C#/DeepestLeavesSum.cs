//Ian Hays
//01-16-2021
//https://leetcode.com/problems/deepest-leaves-sum/
//SC: O(N) TC: O(N)

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
    public int DeepestLeavesSum(TreeNode root) 
    {
        Queue<TreeNode> queue = new Queue<TreeNode>();
        queue.Enqueue(root);
        int result = 0;
        while(queue.Count != 0)
        {
            int m = queue.Count;
            result = 0;
            for(int i = 0; i < m; i++)
            {
                TreeNode node = queue.Dequeue();
                if(node.left != null) queue.Enqueue(node.left);
                if(node.right != null) queue.Enqueue(node.right);
                result += node.val;
            }
        }
        return result;
    }
}
