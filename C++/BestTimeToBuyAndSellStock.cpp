/***********************************************************************************************
Problem      Best Time To Buy And Sell A Stock
Developer    Ian Hays
Date         06/17/2022
URL          https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Space        O(1) 
Time         O(N)
Description  Keep track of future max price and subtract from current price. 
************************************************************************************************/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxPrice = 0, res = 0;
        
        for(int i = size(prices)-1; i >= 0; i--){
            res = max(res, maxPrice - prices[i]);
            maxPrice = max(prices[i], maxPrice);
        }
        
        return res;
    }
};
