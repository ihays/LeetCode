/***********************************************************************************************
Problem      Palindromic Substrings
Developer    Ian Hays
Date         03/27/2021
URL          https://leetcode.com/problems/palindromic-substrings/
Space        O(1) 
Time         O(N^2)
Description  BruteForce solution to determine quantity of palindromic substrings.             
************************************************************************************************/

class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                string str = s.substr(i,j-i+1);
                if(isPalindrome(str)){
                    res++;
                }
            }
        }
        return res;
    }
    
    bool isPalindrome(string& str){
        int l = 0; 
        int r = str.size()-1;
        
        while(l < r){
            if(str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
