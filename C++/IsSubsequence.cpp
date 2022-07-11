/***********************************************************************************************
Problem      Is Subsequence
Developer    Ian Hays
Date         07/11/2021
URL          https://leetcode.com/problems/is-subsequence/
Space        O(1) 
Time         O(N)
Description  Iterate though s for each matching char through iterated t. When index is of size
             return true.
************************************************************************************************/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        for(auto ch: t) if(s[index] == ch) index++;
        return index == size(s);
    }
};
