/***********************************************************************************************
Problem      Check If a Number Is Majority Element in a Sorted Array
Developer    Ian Hays
Date         11/30/2021
URL          https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/
Space        O(N) 
Time         O(N)
Description  Record the frequency of values in the array. We return true if the frequency of the
             target is greater than half the size of the array. 
************************************************************************************************/

class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(auto num: nums) 
            umap[num]++;
        return umap[target] > nums.size()/2;
    }
};
