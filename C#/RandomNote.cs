//Ian Hays
//02-15-2021
//https://leetcode.com/problems/ransom-note/
//SC: O(N) TC: O(N)

public class Solution {
    public bool CanConstruct(string ransomNote, string magazine) {
        int[] chars = new int[26];
        foreach(char ch in magazine) chars[ch-'a']++;
        foreach(char ch in ransomNote) if(--chars[ch-'a'] < 0) return false;
        return true;
    }
}
