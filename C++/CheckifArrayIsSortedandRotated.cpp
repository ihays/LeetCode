/***********************************************************************************************
Problem      Check if Array Is Sorted and Rotated
Developer    Ian Hays
Date         11/14/21
URL          https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
Space        O(1) 
Time         O(N)
Description  Find index of maximum value. Verify values to the left are decreasing and to the right
             are increasing. If the value on most right is the largest, return true.
***********************************************************************************************/

class Solution {
public:
    bool check(vector<int>& nums) {
        int mid = 0, max = 0;
        
        for(int i = 0; i < size(nums); i++){
            if(nums[i] > max)
                max = nums[i], mid = i;            
        }
        
        while(mid+1 < size(nums)){
            if(nums[mid+1] == nums[mid]) mid++;
            else break;
        }
        
        for(int i = mid; i > 0; i--)
            if(nums[i-1] > nums[i]) return false;
        
        for(int i = mid + 1; i < size(nums) - 1; i++)
            if(nums[i] > nums[i+1]) return false;
        
        return mid != size(nums)-1 ? nums.back() <= nums.front() : true;
    }
};
