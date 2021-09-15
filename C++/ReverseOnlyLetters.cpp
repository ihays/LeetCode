/***********************************************************************************************
Problem      Reverse Only Letters
Developer    Ian Hays
Date         09/14/2021
URL          https://leetcode.com/problems/reverse-only-letters/
Space        O(1) 
Time         O(N)
Description  
************************************************************************************************/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = size(s) - 1;
        while(l < r){
            while(l < r && !isalpha(s[l])) l++;
            while(l < r && !isalpha(s[r])) r--;
            swap(s[l++],s[r--]);
        }
        return s;
    }
};
