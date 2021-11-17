/***********************************************************************************************
Problem      Number of Segments in a String
Developer    Ian Hays
Date         11/16/2021
URL          https://leetcode.com/problems/number-of-segments-in-a-string/
Space        O(N) 
Time         O(N)
Description  Store string into a stream and count the number of segments.
************************************************************************************************/

class Solution {
public:
    int countSegments(string s) {
        istringstream iss(s);
        int res = 0;
        while(iss >> s) res++;
        return res;
    }
};
