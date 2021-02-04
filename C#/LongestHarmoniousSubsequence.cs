  
//Ian Hays
//02-04-2021
//https://leetcode.com/problems/longest-harmonious-subsequence/
//SC: O(N) TC: O(N)

public class Solution {
    public int FindLHS(int[] nums) {
        IDictionary<int,int> dict = new Dictionary<int,int>();
        foreach(int num in nums) 
            dict[num] = dict.ContainsKey(num) ? dict[num] + 1 : 1;
        return dict.Max(d => dict.ContainsKey(d.Key + 1) ? d.Value + dict[d.Key + 1]: 0);
    }
}
