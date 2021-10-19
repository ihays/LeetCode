/***********************************************************************************************
Problem      Maximum Difference Between Increasing Elements
Developer    Ian Hays
Date         10/18/2021
URL          https://leetcode.com/problems/maximum-difference-between-increasing-elements/
Space        O(1) 
Time         O(N)
Description  Keep track of the smallest value while traversing through the input array. Determine
             the interval value by subtracting the current value from the smallest value and return
             the maximum.
************************************************************************************************/

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int smallest = nums[0], res = -1;
        for(int i = 1; i < size(nums); i++){
            if(smallest == nums[i]) continue;
            res = max(res, nums[i] - smallest);
            smallest = min(nums[i], smallest);
        }
        return res;
    }
};
