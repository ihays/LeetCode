//Ian Hays
//07-08-2020
//https://leetcode.com/problems/shuffle-the-array/
//SC: O(1) TC: O(N)
//Constant space at the cost of a longer N complexity due to insert/erase vector operations.

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i = 1; i < nums.size(); i+=2){
            nums.insert(nums.begin()+i, nums[n++]);
            nums.erase(nums.begin()+n);
        }
        return nums;
    }
};
