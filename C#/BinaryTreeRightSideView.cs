//Ian Hays
//02-06-2021
//https://leetcode.com/problems/binary-tree-right-side-view/
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
    public IList<int> RightSideView(TreeNode root) {
        if(root == null) return new List<int>();
        Queue<TreeNode> queue = new Queue<TreeNode>();
        queue.Enqueue(root);
        IList<int> result = new List<int>();
        while(queue.Count != 0)
        {
            int m = queue.Count;
            result.Add(queue.Peek().val);
            for(int i = 0; i < m; i++)
            {
                TreeNode node = queue.Peek();
                queue.Dequeue();
                if(node.right != null) queue.Enqueue(node.right);
                if(node.left != null) queue.Enqueue(node.left);
            }
        }
        return result;
    }
}
