//Ian Hays
//12-27-2020
//https://leetcode.com/problems/jump-game/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumps = nums[0];
        for(int i = 1; i < nums.size(); i++){
            jumps--;
            if(jumps < 0) return false;
            jumps = max(nums[i], jumps);
        }
        return true;
    }
};
