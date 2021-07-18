/***********************************************************************************************
Problem      Concatenation of Array
Developer    Ian Hays
Date         07/18/2021
URL          https://leetcode.com/problems/check-if-string-is-decomposable-into-value-equal-substrings/
Space        O(1) 
Time         O(N)
Description  Concact incoming array to itself using insert function and return.
************************************************************************************************/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};
