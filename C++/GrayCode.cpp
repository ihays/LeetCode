/***********************************************************************************************
Problem      Gray Code
Developer    Ian Hays
Date         07/01/2021
URL          https://leetcode.com/problems/gray-code/
Space        O(2^n)
Time         O(2^n)
Description  Using the mathematical trick to grab all numbers from 0 to 2^n that are 1 hamming 
             distance away. We push back the XOR i and its bit shifted value to the right by one
             into a result vector. This gives us all unique values where the first and end elements
             differ by only 1 hamming distance.
***********************************************************************************************/

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        for(int i = 0; i < 1<<n; i++)
            res.push_back(i^(i>>1));
        return res;
    }
};
