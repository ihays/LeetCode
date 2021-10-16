/***********************************************************************************************
Problem      Minimum Difference Between Highest and Lowest of K Scores
Developer    Ian Hays
Date         10/15/2021
URL          https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
Space        O(1) 
Time         O(N*LOG(N))
Description  Sorting the numbers and then finding the minimum differences between all windows of 
             k scores.
************************************************************************************************/

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int res = INT_MAX;
        for(int i = k-1; i < size(nums); i++){
            res = min(res, nums[i]-nums[i-k+1]);
        }
        return res;
    }
};
