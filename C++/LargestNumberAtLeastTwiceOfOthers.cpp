/***********************************************************************************************
Problem      Largest Number At Least Twice of Others
Developer    Ian Hays
Date         08/31/2021
URL          https://leetcode.com/problems/largest-number-at-least-twice-of-others/
Space        O(1) 
Time         O(N)
Description  Determine the largest index and then any number greater than twice, we return -1, 
             otherwise we return the largest index. 
************************************************************************************************/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index = 0;
        for(int i = 1; i < size(nums); i++){
            if(nums[i] > nums[index]) index = i;    
        } 
        for(int i = 0; i < size(nums); i++){
            if(i != index && nums[i]*2 > nums[index]) return -1;     
        } 
        return index;
    }
};
