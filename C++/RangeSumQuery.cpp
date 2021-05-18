/***********************************************************************************************
Problem      Range Sum Query - Immutable
Developer    Ian Hays
Date         05/17/2021
URL          https://leetcode.com/problems/range-sum-query-immutable/
Space        O(N) 
Time         O(N)
Description  Store aggregate sums in array to call when running sum range by subtracting left from
             right index.
************************************************************************************************/

class NumArray {
public:
    vector<int> sums;
    
    NumArray(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sums.push_back(sum + nums[i]);
            sum = sums.back();
        }
    }
    
    int sumRange(int left, int right) {
        return sums[right] - (left > 0 ? sums[left-1] : 0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
