/***********************************************************************************************
Problem      3Sum With Multiplicity
Developer    Ian Hays
Date         04/27/2021
URL          https://leetcode.com/problems/power-of-three/
Space        O(1) 
Time         O(LOG(N))
Description  Loop through powers of 3 until value is greater than input n. If n is equal to the 
             value, return true
************************************************************************************************/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 0) return false;
        unsigned int num = 1;
        while(n > num){
            num *= 3;
        }
        return n == num;
    }
};
