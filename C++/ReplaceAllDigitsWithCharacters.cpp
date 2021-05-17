/***********************************************************************************************
Problem      Replace All Digits with Characters
Developer    Ian Hays
Date         05/16/2021
URL          https://leetcode.com/problems/replace-all-digits-with-characters/
Space        O(1) 
Time         O(N)
Description  Every odd character replace with given shift formula: shift(c, x), where c is a character
             and x is a digit, that returns the xth character after c.
************************************************************************************************/

class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1; i < s.size(); i+=2){
            if(i%2) s[i] = s[i-1] + (s[i] - '0');
        }
        return s;
    }
};
