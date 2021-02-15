//Ian Hays
//02-15-2021
//https://leetcode.com/problems/max-consecutive-ones/
//SC: O(1) TC: O(N)

public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        int result = 0;
        int curr = 0;
        foreach(int num in nums){
            curr = num == 1 ? curr + 1 : 0;
            result = Math.Max(result,curr);
        }
        return result;
    }
}
