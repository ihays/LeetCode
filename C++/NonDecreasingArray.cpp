/***********************************************************************************************
Problem      Non-Decreasing Array
Developer    Ian Hays
Date         05/04/2021
URL          https://leetcode.com/problems/non-decreasing-array/
Space        O(1) 
Time         O(N)
Description  Iterate through array setting previous value to a minimum value. If the array is 
             decreasing, we increment count and set the current value to the previous value if it's
             smaller than our minimum value. 
************************************************************************************************/

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int min = INT_MIN;
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] <= nums[i]){
                min = nums[i-1];
            } else {
                if(nums[i] < min){
                    nums[i] = nums[i-1];
                }
                count++;
            }
        }
        return count <= 1;
    }
};
