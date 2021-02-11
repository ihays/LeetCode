//Ian Hays
//02-11-2021
//https://leetcode.com/problems/valid-anagram/
//SC: O(N^2) TC: O(N^2)

public class Solution {
    public bool IsAnagram(string s, string t) {
        int[] chars = new int[26];
        foreach(char ch in s) ++chars[ch-'a']; 
        foreach(char ch in t) if(--chars[ch-'a'] < 0) return false; 
        return s.Length == t.Length;
    }
}
