/***********************************************************************************************
Problem      Missing Number
Developer    Ian Hays
Date         03/03/2021
URL          https://leetcode.com/problems/missing-number/
Space        O(1) 
Time         O(N)
Description  Sum the numbers from 1 to the size of nums (do not need to account for 0) and then 
             subtract the numbers that are in the array. The difference is the missing number.
************************************************************************************************/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i = 1; i <= nums.size(); i++){
            sum += i - nums[i-1];
        }
        return sum;
    }
};
