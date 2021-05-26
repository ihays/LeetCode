/***********************************************************************************************
Problem      Shortest Unsorted Continuous Subarray
Developer    Ian Hays
Date         05/26/2021
URL          https://leetcode.com/problems/shortest-unsorted-continuous-subarray/submissions/
Space        O(N) 
Time         O(NLOGN)
Description  Sort array, find first index where values are different from beginning and end (i and j).
             We return the difference. If j ever passes i, we break the second loop so the difference
             is 0. 
************************************************************************************************/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < nums.size() && sorted[i] == nums[i]) i++;
        int j = nums.size()-1;
        while(j > i && sorted[j] == nums[j]) j--;
        return j-i+1;
    }
};
