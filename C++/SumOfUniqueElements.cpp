/***********************************************************************************************
Problem      Sum Of Unique Elements
Developer    Ian Hays
Date         10/21/2021
URL          https://leetcode.com/problems/sum-of-unique-elements/
Space        O(1) 
Time         O(N*LOG(N))
Description  We skip over duplicates only incrementing unique elements to the result.
************************************************************************************************/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int index = 0, res = 0;
        while(index < size(nums)){
            while(index + 1 < size(nums) && nums[index] == nums[index+1]) index++;
            res += index - 1 >= 0 ? nums[index] != nums[index-1] ? nums[index] : 0 : nums[index];
            index++;
        }
        return res;
    }
}; 
