/***********************************************************************************************
Problem      Coin Change
Developer    Ian Hays
Date         03/11/2021
URL          https://leetcode.com/problems/coin-change/
Space        O(amount) 
Time         O(N*amount)
Description  Dynamic programming to save value of minimum amount of coins to hold. We use knapsack
             algorithm based on coin value and amount. 
************************************************************************************************/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0] = 0;

        for(int i = 0; i < coins.size(); i++){
            for(int val = 1; val <= amount; val++){
                if(val >= coins[i] && dp[val-coins[i]] != INT_MAX){
                        dp[val] = min(dp[val], dp[val-coins[i]] + 1);                        
                }
            }    
        }
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};
