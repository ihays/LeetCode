/***********************************************************************************************
Problem      Two Sum BSTs
Developer    Ian Hays
Date         07/26/2021
URL          https://leetcode.com/problems/two-sum-bsts/
Space        O(N) 
Time         O(N)
Description  DFS through first tree and insert into set the difference of target and the node value. 
             DFS through second tree and return true if node in set is found, otherwise false. 
************************************************************************************************/

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
    public HashSet<int> compOfTree1;
    
    public bool TwoSumBSTs(TreeNode root1, TreeNode root2, int target)
    {
        compOfTree1 = new HashSet<int>();
        Traverse(root1, target);
        return findTheSum(root2);
    }

    public void Traverse(TreeNode root1, int target)
    {
        if (root1 == null) return;
        compOfTree1.Add(target - root1.val);
        Traverse(root1.left, target);
        Traverse(root1.right, target);
    }
    public bool findTheSum(TreeNode root2)
    {
        if (root2 == null) return false;
        if (compOfTree1.Contains(root2.val)) return true;
        return findTheSum(root2.left) || findTheSum(root2.right);
    }
}
