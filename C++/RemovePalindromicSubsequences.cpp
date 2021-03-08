/***********************************************************************************************
Problem      Remove Palindromic Subsequences
Developer    Ian Hays
Date         03/08/2021
URL          https://leetcode.com/problems/remove-palindromic-subsequences/
Space        O(N) 
Time         O(1)
Description  Since only the letters used are "ab", we know the max value is 2. We check if it's
             a palindrome, if so, we return 1. If it's empty, we subtract to make the result 0. 
             Return 2 in all other cases. 
************************************************************************************************/
class Solution {
public:
    int removePalindromeSub(string s) {
        return s == string(s.rbegin(), s.rend()) ? 1 - s.empty(): 2;
    }
};
