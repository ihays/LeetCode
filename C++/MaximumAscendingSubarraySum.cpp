/***********************************************************************************************
Problem      Maximum Ascending Subarray Sum
Developer    Ian Hays
Date         08/07/2021
URL          https://leetcode.com/problems/maximum-ascending-subarray-sum/
Space        O(1) 
Time         O(N)
Description  sum values that are ascending, reset when there is a descending value. Return max
             subarray.
************************************************************************************************/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = nums[0], tmp = res;
        for(int i = 1; i < size(nums); i++){
            tmp = nums[i] > nums[i-1] ? tmp + nums[i] : nums[i];
            res = max(res,tmp);
        }
        return res;
    }
};
