/***********************************************************************************************
Problem      Single Element in a Sorted Array
Developer    Ian Hays
Date         11/19/2021
URL          https://leetcode.com/problems/single-element-in-a-sorted-array/
Space        O(1) 
Time         O(N)
Description  We XOR the entire array. XOR removes duplicates, and the single will be in the result.  
************************************************************************************************/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = 0;
        for(auto &num: nums) res ^= num;        
        return res;
    }
};
