/***********************************************************************************************
Problem      Is Subsequence
Developer    Ian Hays
Date         07/11/2021
URL          https://leetcode.com/problems/first-bad-version/
Space        O(1) 
Time         O(LOG(N))
Description  Binary search through versions to grab the first bad version
************************************************************************************************/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0, r = n-1, m = l + (r-l)/2;
        while(l <= r){
            if(!isBadVersion(m))
                l = m+1;
            else
                r = m-1;
            m = l + (r-l)/2;
        }
        
        return m;
    }
};
