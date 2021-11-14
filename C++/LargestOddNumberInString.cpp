/***********************************************************************************************
Problem      Largest Odd Number in String
Developer    Ian Hays
Date         11/13/21
URL          https://leetcode.com/problems/largest-odd-number-in-string/
Space        O(1) 
Time         O(N)
Description  Return substring based on size of index where last odd character exists
************************************************************************************************/

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = size(num) - 1; i >= 0; i--){
            if((num[i] - '0') % 2) return num.substr(0, i+1);
        }
        return "";
    }
};
