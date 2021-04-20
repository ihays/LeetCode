/***********************************************************************************************
Problem      Combination Sum 4
Developer    Ian Hays
Date         04/19/2021
URL          https://leetcode.com/problems/combination-sum-iv/
Space        O(N) 
Time         O(N*M)
Description  Dynamic Programming to determine combinations of nums to form target.         
************************************************************************************************/

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;
        for(int i = 1; i <= target; i++){
            for(int num: nums){
                if(num <= i) dp[i] += dp[i - num];
            }
        }
        return dp[target];
    }
};
