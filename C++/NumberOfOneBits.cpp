/***********************************************************************************************
Problem      Number of 1 Bits
Developer    Ian Hays
Date         06/23/2022
URL          https://leetcode.com/problems/number-of-1-bits/
Space        O(1) 
Time         O(1)
Description  bit shift counting number of digits in one's place
************************************************************************************************/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for(int i = 0; i < 32; i++){
            if(n%2) res++;
            n >>= 1;
        }
        return res;
    }
};
