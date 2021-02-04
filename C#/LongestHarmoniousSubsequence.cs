  
//Ian Hays
//02-04-2021
//https://leetcode.com/problems/longest-harmonious-subsequence/
//SC: O(N) TC: O(N)

public class Solution {
    public int FindLHS(int[] nums) {
        IDictionary<int,int> dict = new Dictionary<int,int>();
        foreach(var num in nums){
            if(dict.ContainsKey(num)){
                dict[num]++;
            } else {
                dict.Add(num,1);
            }
        }
        int res = 0;
        foreach(KeyValuePair<int, int> entry in dict){
            if(dict.ContainsKey(entry.Key + 1)){
                res = Math.Max(res, entry.Value + dict[entry.Key + 1]);
            }
        }
        return res;
    }
}
