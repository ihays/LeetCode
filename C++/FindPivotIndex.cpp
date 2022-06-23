/***********************************************************************************************
Problem      Find Pivot Index
Developer    Ian Hays
Date         06/22/2022
URL          https://leetcode.com/problems/find-pivot-index/
Space        O(1) 
Time         O(N)
Description  track left and right sum of index. Return index when they are equal. 
************************************************************************************************/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = 0, leftSum = 0;
        
        for(auto num: nums) rightSum += num;
        
        for(int i = 0; i < size(nums); i++){
            rightSum -= nums[i];
            if(i > 0) leftSum += nums[i-1];
            if(rightSum == leftSum) return i;
        }
        return -1;
    }
};
