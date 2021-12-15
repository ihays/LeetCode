/***********************************************************************************************
Problem      Third Maximum Number
Developer    Ian Hays
Date         12/14/2021
URL          https://leetcode.com/problems/third-maximum-number/
Space        O(1)
Time         O(N*LOG(N))
Description  We sort and erase duplicates. Return the third maximum number.
************************************************************************************************/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        if(size(nums) < 3) return nums.back();
        return nums[size(nums)-3];
    }
};
