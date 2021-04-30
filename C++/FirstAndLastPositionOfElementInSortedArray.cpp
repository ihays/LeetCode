/***********************************************************************************************
Problem      First and Last Position of Element in Sorted Array
Developer    Ian Hays
Date         04/29/2021
URL          https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
Space        O(1) 
Time         O(LOG(N))
Description  Binary search for value. If value is found, we set the value and then decrement or
             increment index based on if we are searching for lower or upper bound. return results
             in the vector.
************************************************************************************************/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1,-1};
        int l = 0; 
        int r = nums.size()-1;
        //find lower bound
        while(l < r){
            int m = (l + r)/2;
            if(nums[m] == target){
                res[0] = m;
                r = m - 1;
            }
            if(nums[m] > target){
                r = m - 1;
            }
            if(nums[m] < target){
                l = m + 1;
            }
        }
        if(r >= 0 && r < nums.size()) res[0] = nums[r] == target ? r : res[0];

        l = 0;
        r = nums.size()-1;
        //find upper bound
        while(l < r){
            int m = (l + r)/2;
            if(nums[m] == target){
                res[1] = m;
                l = m + 1;
            }
            if(nums[m] > target){
                r = m - 1;
            }
            if(nums[m] < target){
                l = m + 1;
            }
        }
        if(l >= 0 && l < nums.size()) res[1] = nums[l] == target ? l : res[1];    

        return res;
    }
};
