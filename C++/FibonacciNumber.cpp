/***********************************************************************************************
Problem      Fibonacci Number
Developer    Ian Hays
Date         04/15/2021
URL          https://leetcode.com/problems/fibonacci-number/
Space        O(1) 
Time         O(N)
Description  Follow fibonacci formula by using a and b setting to c.             
************************************************************************************************/


class Solution {
public:
    int fib(int n) {
        if(!n) return n;
        int a = 0;
        int b = 1;
            
        for(int i = 2; i <= n; i++)
        {
            int c = a + b;
            b = a;
            a = c;
        }
        return a + b;
    }
};