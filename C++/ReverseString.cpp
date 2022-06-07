/***********************************************************************************************
Problem      Reverse String
Developer    Ian Hays
Date         06/07/2022
URL          https://leetcode.com/problems/reverse-string/
Space        O(1) 
Time         O(N)
Description  Swap endpoint values moving towards middle of string.
************************************************************************************************/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = size(s)-1;
        while(l < r) swap(s[l++],s[r--]);
    }
};
