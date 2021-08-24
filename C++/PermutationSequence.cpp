/***********************************************************************************************
Problem      Permutation Sequence
Developer    Ian Hays
Date         08/24/2021
URL          https://leetcode.com/problems/permutation-sequence/
Space        O(N) 
Time         O(N)
Description  First create a string of size n, with values from 1 to n and then find the kth permutation
             and return.
************************************************************************************************/

class Solution {
public:
    string getPermutation(int n, int k) {
        string s;
        for(int i = 1; i <= n; i++) s.push_back(i + '0');
        while(--k) next_permutation(s.begin(),s.end());
        return s;
    }
};
