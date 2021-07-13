/***********************************************************************************************
Problem      House Robber
Developer    Ian Hays
Date         07/13/2021
URL          https://leetcode.com/problems/house-robber/
Space        O(1)
Time         O(N)
Description  We dp backwards the maximum value a robber can stash. We set each entry to the greatest
             value between the next house over, or current max. We return the max of the first two
             houses. 
************************************************************************************************/
class Solution {
public:
    int rob(vector<int>& nums) {
        for(int i = size(nums)-2; i >= 0; i--)
            nums[i] = i+2 < size(nums) ? max(nums[i] + nums[i+2], nums[i+1]) : max(nums[i], nums[i+1]);
        return 1 < size(nums) ? max(nums[0], nums[1]) : nums[0];
    }
};

