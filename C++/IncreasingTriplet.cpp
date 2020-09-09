//Ian Hays
//07-05-2020
//https://leetcode.com/problems/increasing-triplet-subsequence/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.empty()) return false;
        int t1 = nums[0];
        int t2 = INT_MAX;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > t2){
                return true;
            } else if(nums[i] > t1){
                t2 = nums[i];
            } else {
                t1 = nums[i];
            }
        }
        return false;
    }
};

