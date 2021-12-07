/***********************************************************************************************
Problem      Monotonic Array
Developer    Ian Hays
Date         12/6/2021
URL          https://leetcode.com/problems/monotonic-array/
Space        O(1) 
Time         O(N)
Description  Check if increasing, then check if decreasing. If index is equal to vector size, return
             true.
************************************************************************************************/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i;
        for(i = 1; i < size(nums); i++){
            if(nums[i-1] > nums[i]) break;
        }
        if(i == size(nums)) return true;
        i = 0;
        for(i = 1; i < size(nums); i++){
            if(nums[i-1] < nums[i]) break;
        }
        return i == size(nums);
    }
};
