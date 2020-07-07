//Ian Hays
//07-06-2020
//https://leetcode.com/problems/running-sum-of-1d-array/
//SC: O(1) TC: O(N)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};
