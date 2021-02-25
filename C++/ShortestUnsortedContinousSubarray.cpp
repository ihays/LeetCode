//Ian Hays
//02-25-2021
//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
//SC: O(N) TC: O(1)

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        while(l+1 < nums.size() && nums[l] <= nums[l+1]) l++;
        while(r-1 >= 0 && nums[r] >= nums[r-1]) r--;
        
        if(r <= l) return 0;
        int minimum = INT_MAX;
        int maximum = INT_MIN;
       
        for(int i = l; i <= r; i++){
            minimum = min(nums[i], minimum);
            maximum = max(nums[i], maximum);
        }
        
        while(l-1 >= 0 && nums[l-1] > minimum) l--;
        while(r+1 < nums.size() && nums[r+1] < maximum) r++;
        
        return r-l+1;
    }
};
