/***********************************************************************************************
Problem      Binary Search
Developer    Ian Hays
Date         11/27/2021
URL          https://leetcode.com/problems/binary-search/
Space        O(1) 
Time         O(LOG(N))
Description  Simple binary search to find index of target. 
************************************************************************************************/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = size(nums)-1;
        
        while(l <= r){
            int m = (l + r)/2;
            if(nums[m] == target) return m;
            if(nums[m] < target) l = m+1;
            else r = m-1;
        }
        return -1;
    }
};
