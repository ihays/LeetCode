/***********************************************************************************************
Problem      Majority Element
Developer    Ian Hays
Date         02/21/2022
URL          https://leetcode.com/problems/majority-element/
Space        O(1) 
Time         O(N*LOG(N))
Description  sort the array to have the majority element placed in the middle to return.
************************************************************************************************/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(begin(nums),end(nums));
        return nums[size(nums)/2];
    }
};
