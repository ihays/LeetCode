/***********************************************************************************************
Problem      Find The Difference
Developer    Ian Hays
Date         2/1/2022
URL          https://leetcode.com/problems/find-the-difference/
Space        O(1) 
Time         O(N)
Description  XOR each letter to eliminate duplicates and reveal the difference in t.
************************************************************************************************/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = s[0];
        for(int i = 1; i < size(s); i++) res ^= s[i];
        for(auto ch: t) res ^= ch;        
        return res;
    }
};
