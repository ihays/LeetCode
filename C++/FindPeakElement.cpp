//Ian Hays
//07-19-2020
//https://leetcode.com/problems/find-peak-element/
//SC: O(1) TC: O(N)

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        if(nums.size() == 2) return nums[0] > nums[1] ? 0 : 1;
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) return i;
        }
        
        return nums[nums.size()-1] > nums[0] ? nums.size()-1 : 0;
    }
};
