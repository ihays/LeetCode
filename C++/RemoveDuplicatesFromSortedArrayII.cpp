/***********************************************************************************************
Problem      Remove Duplicates from Sorted Array II
Developer    Ian Hays
Date         08/21/2021
URL          https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
Space        O(1) 
Time         O(N)
Description  Since array is passed in sorted, we check back two indexes to verify if the value is
             less than our index. We overwrite the array with non-duplicates, and then return the
             index. 
************************************************************************************************/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for(int num: nums) if(index < 2 || nums[index-2] < num ) nums[index++] = num;
        return index;
    }
};
