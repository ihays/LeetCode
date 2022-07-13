/***********************************************************************************************
Problem      Best Time To Buy And Sell A Stock
Developer    Ian Hays
Date         07/12/2022
URL          https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Space        O(1) 
Time         O(N)
Description  Keep track of future max price and subtract from current price. 
************************************************************************************************/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0], res = 0;
        
        for(int i = 1; i < size(prices); i++){
            res = max(res,prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        return res;
    }
};
