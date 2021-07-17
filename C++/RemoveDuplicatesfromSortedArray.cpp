/***********************************************************************************************
Problem      Remove Duplicates from Sorted Array
Developer    Ian Hays
Date         07/17/2021
URL          https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Space        O(1) 
Time         O(N)
Description  We overwrite the unique values based on index and skip duplicates. Return index.
************************************************************************************************/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for(int i = 0; i < size(nums); i++){
            if(i-1 >= 0 && nums[i-1] == nums[i]) continue;
            nums[index++] = nums[i];
        }
        return index;
    }
};
