/***********************************************************************************************
Problem      Decompress Run-Length Encoded List
Developer    Ian Hays
Date         06/24/2021
URL          https://leetcode.com/problems/decompress-run-length-encoded-list/
Space        O(N) 
Time         O(N)
Description  Iterate through pairs of nums using first value as frequency and second as value. Use
             the insert function to insert values at the end of the result vector. 
************************************************************************************************/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i = 1; i < nums.size(); i+=2)
            res.insert(end(res), nums[i-1], nums[i]);
        return res;
    }
};
