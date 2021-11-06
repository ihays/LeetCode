/***********************************************************************************************
Problem      Smallest Index With Equal Value
Developer    Ian Hays
Date         11/05/2021
URL          https://leetcode.com/problems/smallest-index-with-equal-value/
Space        O(1) 
Time         O(N)
Description  we loop i to size of the array and mod it with 10 to check if equivalent to vector
             at index and return.
************************************************************************************************/

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i = 0; i < size(nums); i++){
            if(i%10 == nums[i]) return i;
        }
        return -1;
    }
};
