/***********************************************************************************************
Problem      Find Pivot Index
Developer    Ian Hays
Date         07/11/2022
URL          https://leetcode.com/problems/find-pivot-index/
Space        O(1) 
Time         O(N)
Description  track left and right sum of index. Return index when they are equal. 
************************************************************************************************/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0, rightSum = 0;
        
        for(auto num: nums) rightSum += num;
        
        for(int i = 0; i < size(nums); i++){
            rightSum -= nums[i];
            if(leftSum == rightSum) return i; 
            leftSum += nums[i];
        }
        return -1;
    }
};
