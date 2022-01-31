/***********************************************************************************************
Problem      Richest Customer Wealth
Developer    Ian Hays
Date         1/30/2022
URL          https://leetcode.com/problems/richest-customer-wealth/
Space        O(1) 
Time         O(N^2)
Description  accumulate each account and return the maximum value. 
************************************************************************************************/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for(auto& account: accounts){
            res = max(res, accumulate(begin(account), end(account),0));
        }
        return res;
    }
};
