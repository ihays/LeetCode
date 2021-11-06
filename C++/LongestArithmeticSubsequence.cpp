/***********************************************************************************************
Problem      Longest Arithmetic Subsequence
Developer    Ian Hays
Date         11/06/2021
URL          https://leetcode.com/problems/longest-arithmetic-subsequence/
Space        O(N) 
Time         O(N^2)
Description  Store sequence count for each index based on difference in a dp vector. We return
             the greatest value.
************************************************************************************************/

class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int res = 2;
        int n = size(nums);
        vector<vector<int>> dp(n, vector<int>(2000,0));
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int diff = nums[j] - nums[i] + 1000;
                dp[j][diff] = max(2, dp[i][diff] + 1);
                res = max(res, dp[j][diff]);
            }
            
        }
        return res;
    }
};
