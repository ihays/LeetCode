/***********************************************************************************************
Problem      Find Value of Variable after Performing Operations
Developer    Ian Hays
Date         09/21/2021
URL          https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
Space        O(1) 
Time         O(N)
Description  We determine to increment or decrement by the middle value of the operation to return.
************************************************************************************************/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for(auto operation: operations) res += operation[1] == '-' ? -1 : 1;
        return res;
    }
};
