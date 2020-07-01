//Ian Hays
//06-30-2020
//https://leetcode.com/problems/house-robber/
//SC: O(1) TC: O(N)
//DP - a: maximum amount stashed from previous states. b: pending max amount stashed from previous states. c: max amount stashed pointed to by i. 

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0],nums[1]);
        int a = nums[0];
        int b = nums[1]; 
        int c = INT_MIN;
        for(int i = 2; i < nums.size(); i++){
            c = max(c,nums[i] + a);
            a = max(a,b);
            b = c;
        }
        return max(a,c);
    }
};

