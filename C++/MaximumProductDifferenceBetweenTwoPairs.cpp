/***********************************************************************************************
Problem      Maximum Product Difference Between Two Pairs
Developer    Ian Hays
Date         07/18/2021
URL          https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
Space        O(1) 
Time         O(N*LOG(N))
Description  Sort the array and return the difference between the greatest two and smallest two elements.
************************************************************************************************/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(begin(nums), end(nums));
        return nums[size(nums)-1] * nums[size(nums)-2] - nums[0] * nums[1];
    }
};
