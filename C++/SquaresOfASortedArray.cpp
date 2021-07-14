/***********************************************************************************************
Problem      Squares of a Sorted Array
Developer    Ian Hays
Date         07/14/2021
URL          https://leetcode.com/problems/squares-of-a-sorted-array/
Space        O(N)
Time         O(N)
Description  Since input nums is in non-increasing order, we want to grab the largest square on
             the outside, and insert into the array from the end backwards. 
************************************************************************************************/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l = 0;
        int r = nums.size()-1;

        for(int i = nums.size()-1; i >= 0; i--){
            if(abs(nums[l]) > abs(nums[r])) res[i] = nums[l] * nums[l++];
            else res[i] = nums[r] * nums[r--];
        }
        return res;
    }
};
