/***********************************************************************************************
Problem      Jump Game II
Developer    Ian Hays
Date         05/05/2021
URL          https://leetcode.com/problems/jump-game-ii/
Space        O(N) 
Time         O(N)
Description  Store minimum jump in DP vector as we iterate from the end of the numbers to the beginning
             to determine minimum jumps.         
************************************************************************************************/

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> dp(nums.size(), 100000);
        dp[n]= 0;
        for(int i = n-1; i >= 0; i--){
            int jump = nums[i];
            for(int j = 1; j <= jump && i + j < nums.size(); j++){
                dp[i] = min(dp[i], dp[i+j]+1);
            }
        }
        return dp[0];
    }
};
