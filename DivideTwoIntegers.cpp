//Ian Hays
//07-24-2020
//https://leetcode.com/problems/divide-two-integers/
//SC: O(1) TC: O(N)

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        int sign = dividend < 0 ^ divisor < 0 ? -1 : 1;
        long divd = labs(dividend);
        long divs = labs(divisor);
        long res = 0;
        while(divd >= divs){
            long tmp = divs;
            long m = 1;
            while(tmp*2 < divd){
                tmp *= 2;
                m *= 2;
            }
            divd -= tmp;
            res += m;
        }
        return res * sign;
    }
};
