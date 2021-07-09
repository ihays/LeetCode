/***********************************************************************************************
Problem      Longest Increasing Subsequence
Developer    Ian Hays
Date         07/09/2021
URL          https://leetcode.com/problems/longest-increasing-subsequence/
Space        O(N)
Time         O(N^2)
Description  Use a DP Vector to store longest subsequence starting at index. Hold maximum value
             in a result integer. 
************************************************************************************************/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int res = 1, n = size(nums);
        vector<int> dp(n, 1);
        for(int i = n-2; i >= 0; i--){
            for(int j = i+1; j < n; j++){
                if(nums[j] > nums[i]){
                    dp[i] = max(dp[j]+1,dp[i]), res = max(res, dp[i]);
                }
            }
        }
        return res;
    }
};

