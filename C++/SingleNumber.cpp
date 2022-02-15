/***********************************************************************************************
Problem      Single Number
Developer    Ian Hays
Date         02/14/2022
URL          https://leetcode.com/problems/single-number/
Space        O(1) 
Time         O(N)
Description  xor entire array to cancel out duplicates to return the single number.
************************************************************************************************/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = nums[0];
        for(int i = 1; i < size(nums); i++){
            res ^= nums[i];
        }
        return res;
    }
};
