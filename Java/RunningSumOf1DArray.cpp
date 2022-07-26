/***********************************************************************************************
Problem      Running Sum Of 1D Array
Developer    Ian Hays
Date         07/25/2022
URL          https://leetcode.com/problems/running-sum-of-1d-array/
Space        O(1) 
Time         O(N)
Description  Build the running sum by traversing the array and accumulating each element from 
             the previous element.
************************************************************************************************/

class Solution {
    public int[] runningSum(int[] nums) {
        for(int i = 1; i < nums.length; i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
}
