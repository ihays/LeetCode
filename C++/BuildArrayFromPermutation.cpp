/***********************************************************************************************
Problem      Build Array from Permutation
Developer    Ian Hays
Date         08/04/2021
URL          https://leetcode.com/problems/build-array-from-permutation/
Space        O(N) 
Time         O(N)
Description  input into result array with permutation indexed values and return.
************************************************************************************************/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res(size(nums));
        for(int i = 0; i < size(nums); i++) res[i] = nums[nums[i]];
        return res;
    }
};
