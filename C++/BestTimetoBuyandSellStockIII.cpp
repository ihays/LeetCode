/***********************************************************************************************
Problem      Best Time to Buy and Sell Stock III
Developer    Ian Hays
Date         07/17/2021
URL          https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
Space        O(N) 
Time         O(N)
Description  Use two dynamic vectors to store the maximum profit for the left values and right values
             based on index. We iterate through both right/left dp vectors to get the maximum value
             for buy/sell and return.
************************************************************************************************/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = size(prices), smallest = prices[0], largest = prices[n-1];
        vector<int> left(n), right(n);
        for(int i = 1; i < n; i++){
            left[i] = max(prices[i] - smallest, left[i-1]);
            right[n-i-1] = max(largest - prices[n-i-1], right[n-i]);
            smallest = min(smallest,prices[i]);
            largest = max(largest, prices[n-i-1]);
        }
        int res = 0;
        for(int i = 1; i < n; i++) res = max(res, left[i-1]+right[i]);
        return max(res, left[n-1]);
    }
};
auto speed_up = []() {std::ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
