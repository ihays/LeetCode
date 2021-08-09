/***********************************************************************************************
Problem      Two Sum Less Than K
Developer    Ian Hays
Date         08/09/2021
URL          https://leetcode.com/problems/two-sum-less-than-k/
Space        O(1) 
Time         O(N*LOG(N))
Description  Sort values and grab the maximum value that is less than k. We do this by incrementing
             the left or right depending if it's less than k or not. incrementing left increases 
             the value, decrementing the right decreases the value. 
************************************************************************************************/

class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int l = 0, r = size(nums)-1, res = -1; 
        while(l < r){
            if(nums[l] + nums[r] < k) res = max(res, nums[l++] + nums[r]);
            else r--;
        }
        return res;
    }
};
