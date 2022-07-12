/***********************************************************************************************
Problem      Rotate Array
Developer    Ian Hays
Date         07/12/2022
URL          https://leetcode.com/problems/rotate-array/
Space        O(1) 
Time         O(N)
Description  Reverse whole array, reverse partitions based on k mod size of array.
************************************************************************************************/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= size(nums);
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};


    
