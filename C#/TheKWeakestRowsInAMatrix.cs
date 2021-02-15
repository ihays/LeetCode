//Ian Hays
//02-15-2021
//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
//SC: O(N) TC: O(N^2)

public class Solution {
    public int[] KWeakestRows(int[][] mat, int k) {
        List<int[]> soldiers = new List<int[]>();
        for(int i = 0; i < mat.Length; i++) soldiers.Add(new int[2]{i, mat[i].Sum()});
        soldiers.Sort((a,b) => a[1] == b[1] ? a[0].CompareTo(b[0]) : a[1].CompareTo(b[1]));
        return soldiers.Select(x => x[0]).Take(k).ToArray();
    }
}
