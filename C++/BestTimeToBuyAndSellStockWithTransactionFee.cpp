/***********************************************************************************************
Problem      Best Time to Buy and Sell Stock with Transaction Fee
Developer    Ian Hays
Date         03/16/2021
URL          https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
Space        O(1) 
Time         O(N)
Description  DP, max hold value and max sold value. Return max sold value at end of function           
************************************************************************************************/

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int size = prices.size();
        if(size < 2) return 0;
        int sold = 0, hold = -prices[0];
        
        for(int i = 1; i < size; i++){
            hold = max(hold, sold - prices[i]);
            sold = max(sold, hold - fee + prices[i]);
        }
        return sold;
    }
};
