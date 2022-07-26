/***********************************************************************************************
Problem      Find Pivot Index
Developer    Ian Hays
Date         07/25/2022
URL          https://leetcode.com/problems/find-pivot-index/
Space        O(1) 
Time         O(N)
Description  summate left and right while traversing through array and return index when equal.
************************************************************************************************/
class Solution {
    public int pivotIndex(int[] nums) {
        int sumLeft = 0, sumRight = 0;
        for(int num: nums){
            sumRight += num;
        }
        
        for(int i = 0; i < nums.length; i++){
            if(i > 0) sumLeft += nums[i-1];
            sumRight -= nums[i];
            if(sumLeft == sumRight) return i;
        }
        return -1;
    }
}
