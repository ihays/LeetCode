/***********************************************************************************************
Problem      Longest Consecutive Sequence
Developer    Ian Hays
Date         06/06/2021
URL          https://leetcode.com/problems/longest-consecutive-sequence/
Space        O(N)
Time         O(N)
Description  Place all values into a set for O(1) access. We loop through all numbers until we find
             a number that has no previous value. We count all numbers following in sequence that 
             exist in the set. Return the maximum sequence.
************************************************************************************************/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(begin(nums), end(nums));
        int res = 0;
        for(auto num: nums){
            if(!uset.count(num-1)){
                int count = 1;
                while(uset.count(num+count)) count++;
                res = max(res,count);    
            }
        }
        return res;
    }
};
