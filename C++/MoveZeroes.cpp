/***********************************************************************************************
Problem      Move Zeroes
Developer    Ian Hays
Date         07/13/2022
URL          https://leetcode.com/problems/move-zeroes/
Space        O(1) 
Time         O(N)
Description  using an index, replace values that are non zero from the beginning of the input vector.
             fill the rest of the vector with 0's. 
************************************************************************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        
        for(int i = 0; i < size(nums); i++){
            if(nums[i]){
                nums[index++] = nums[i];
            }
        }
        for(; index < size(nums); index++){
            nums[index] = 0;
        }
    }
};
