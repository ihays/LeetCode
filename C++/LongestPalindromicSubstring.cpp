/***********************************************************************************************
Problem      Longest Palindromic Substring
Developer    Ian Hays
Date         07/29/2021
URL          https://leetcode.com/problems/k-closest-points-to-origin/
Space        O(N) 
Time         O(N^2)
Description  Determine palindrome at positions i and i & i+1 to find the largest palindrome. Return
             max length palindrome.
************************************************************************************************/

class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        for(int i = 0; i < size(s); i++){
            string tmp = palindrome(i,i,s);
            if(size(tmp) > size(res)) res = tmp;
            if(i+1 < size(s) && s[i] == s[i+1]){
                tmp = palindrome(i,i+1,s);
                if(size(tmp) > size(res)) res = tmp;
            }
        }
        return res;
    }
    string palindrome(int l, int r, string& s){
        while(l-1 >= 0 && r+1 < size(s) && s[l-1] == s[r+1]){
            l--;
            r++;
        }
        return s.substr(l,r-l+1);
    }
};
