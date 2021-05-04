/***********************************************************************************************
Problem      Running Sum of 1d Array
Developer    Ian Hays
Date         05/03/2021
URL          https://leetcode.com/problems/running-sum-of-1d-array/
Space        O(1) 
Time         O(N)
Description  Store running sum in input array by accumulating the element before.           
************************************************************************************************/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};