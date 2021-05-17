/***********************************************************************************************
Problem      Split a String in Balanced Strings
Developer    Ian Hays
Date         05/17/2021
URL          https://leetcode.com/problems/split-a-string-in-balanced-strings/
Space        O(1) 
Time         O(N^2)
Description  Increment if R, decrement if L. Each time we see 0 this means string is balanced and
             increment result by one.
************************************************************************************************/

class Solution {
public:
    int balancedStringSplit(string s) {
        int val = 0;
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            val += s[i] == 'R' ? 1 : -1;
            if(val == 0) res++;
        }
        
        return res;
    }
};
