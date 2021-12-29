/***********************************************************************************************
Problem      Search Insert Position
Developer    Ian Hays
Date         12/28/2021
URL          https://leetcode.com/problems/search-insert-position/
Space        O(1)
Time         O(LOG(N))
Description  Binary search for insert position of value in sorted list. 
************************************************************************************************/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = size(nums)-1, m = (r-l)/2;
        while(l <= r){
            if(nums[m] < target) l = m+1;
            else r = m-1;
            m = l + (r - l)/2;
        }
        return m;
    }
};
