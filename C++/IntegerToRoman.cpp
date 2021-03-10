/***********************************************************************************************
Problem      Integer to Roman
Developer    Ian Hays
Date         03/10/2021
URL          https://leetcode.com/problems/integer-to-roman/
Space        O(1) 
Time         O(N)
Description  We subtract from number while building Roman Numerals based off defined data in the
             initial arrays.
************************************************************************************************/

class Solution {
public:
    string intToRoman(int num) {
        int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res;
        for(int i = 0; i < 13; i++){
            while(num >= val[i]){
                res += roman[i];
                num -= val[i];
            }
        }
        return res;
    }
};
