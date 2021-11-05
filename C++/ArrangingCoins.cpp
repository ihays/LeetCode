/***********************************************************************************************
Problem      Arrange Coins
Developer    Ian Hays
Date         11/04/2021
URL          https://leetcode.com/problems/arranging-coins/
Space        O(1) 
Time         O(N)
Description  We keep track of the number of indexes n can hold by subtracting an incremental integer
             i value. 
************************************************************************************************/

class Solution {
public:
    int arrangeCoins(int n) {
        int res = 0;
        for(int i = 1; n >= i; i++){
            n-=i;
            res++;
        }
        return res;
    }
};
