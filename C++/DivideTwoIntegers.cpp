/***********************************************************************************************
Problem      Divide Two Integers
Developer    Ian Hays
Date         02/27/2021
URL          https://leetcode.com/problems/divide-two-integers/
Space        O(1) 
Time         O(LOG(N))
Description  Determines division rounding down without using multiplication, division, or mod. If
             there will be an overflow (-1 times minimum integer value) we return max integer 
             value. Subtract the divisor from the dividend while looping and accumulating the 
             result. Nested while loop to exponentially drive up the accumulation to give a runtime
             of LOG(N).
************************************************************************************************/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        int sign = dividend < 0 ^ divisor < 0 ? -1 : 1;
        long dvd = abs(dividend);
        long dvs = abs(divisor);
        long res = 0;
        while(dvd >= dvs){
            long d = dvs;
            long r = 1;
            // nested while loop to exponentially drive up accumulation
            while(d+d < dvd){
                d+=d;
                r+=r;
            }
            dvd -= d;
            res += r;
        }
        return res * sign;
    }
};
