/***********************************************************************************************
Problem      Find All Duplicates in an Array
Developer    Ian Hays
Date         10/06/2021
URL          https://leetcode.com/problems/find-all-duplicates-in-an-array/
Space        O(1) 
Time         O(N)
Description  We denote a seen integer by setting the value at the index to negative. If we see
             a negative, we push to result array. 
************************************************************************************************/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < size(nums); i++){
            int num = abs(nums[i]);
            if(nums[num-1] < 0) res.push_back(abs(num));
            else nums[num-1] *= -1;
        }
        return res;
    }
};
