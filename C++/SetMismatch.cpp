/***********************************************************************************************
Problem      Set Mismatch
Developer    Ian Hays
Date         03/02/2021
URL          https://leetcode.com/problems/set-mismatch/
Space        O(1) 
Time         O(N)
Description  Bubble Sort based on correct index. Duplicate will find itself in the position of the
             missing number. Iterate through checking if value is in correct position, if not, return
             the duplicate number, and the index of the missing number. 
************************************************************************************************/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] != nums[nums[i] - 1])swap(nums[i], nums[nums[i] - 1]);
        }

        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] != i + 1) return {nums[i], i + 1};
        }
        return {};
    }
};
