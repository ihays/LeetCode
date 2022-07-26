/***********************************************************************************************
Problem      Is Subsequence
Developer    Ian Hays
Date         07/25/2022
URL          https://leetcode.com/problems/is-subsequence/
Space        O(1) 
Time         O(N)
Description  while traversing through t, increment index of s when there is a match. If index is 
             equal to length of s, return true, otherwise false. 
************************************************************************************************/

class Solution {
    public boolean isSubsequence(String s, String t) {
        int index = 0;
        for(char ch: t.toCharArray()){
            if(index == s.length()) return true;
            if(s.charAt(index) == ch) index++;
        }
        return s.length() == index;
    }
}
