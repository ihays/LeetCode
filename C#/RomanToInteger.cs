//Ian Hays
//02-20-2021
//https://leetcode.com/problems/roman-to-integer/
//SC: O(N) TC: O(N)

public class Solution {
    public int RomanToInt(string s) {
        Dictionary<char,int> dict = new Dictionary<char,int>
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int res = 0;
        for(int i = s.Length-1; i >= 0; i--){
            res += i+1 < s.Length && dict[s[i]] < dict[s[i+1]] ? -dict[s[i]] : dict[s[i]];
        }
        return res;
    }
}
