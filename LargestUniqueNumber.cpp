/***********************************************************************************************
Problem      Largest Unique Number
Developer    Ian Hays
Date         08/20/2021
URL          https://leetcode.com/problems/largest-unique-number/
Space        O(N) 
Time         O(N)
Description  Store numbers and counts in a frequency map. Return largest value with a count of 1. 
************************************************************************************************/

class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num: nums) freq[num]++;
        int res = -1;
        for(auto [num,count]: freq){
            if(count == 1) res = max(res, num);
        }
        return res;
    }
};
