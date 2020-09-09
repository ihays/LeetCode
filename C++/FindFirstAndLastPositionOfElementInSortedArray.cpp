//Ian Hays
//07-20-2020
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//SC: O(1) TC: O(LOG(N))
//Binary search for last occurence of target and first occurance of target. 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size(), mid;
        vector<int> res = {-1,-1};
        //find start position
        while(left < right){
            mid = left + (right - left)/2;
            if(nums[mid] >= target){
                right = mid;
            } else {
                left = mid+1;
            }   
            if(nums[mid] == target) res[0] = mid;
        }

        left = 0;
        right = nums.size();
        //find end position
        while(left < right){
            mid = left + (right - left)/2;
            if(nums[mid] > target){
                right = mid;
            } else {
                left = mid+1;
            }
            if(nums[mid] == target) res[1] = mid;
        }

        return res;
    }
};
