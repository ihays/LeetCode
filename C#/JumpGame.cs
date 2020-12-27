//Ian Hays
//12-27-2020
//https://leetcode.com/problems/jump-game/
//SC: O(1) TC: O(N)

public class Solution {
    public bool CanJump(int[] nums) {
        int jumps = nums[0];
        for(int i = 1; i < nums.Length; i++){
            jumps--;
            if(jumps < 0) return false;
            jumps = Math.Max(nums[i], jumps);
        }
        return true;
    }
}
