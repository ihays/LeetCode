//Ian Hays
//08-27-2020
//https://leetcode.com/problems/first-missing-positive/
//SC: O(1) TC: O(N)

class Solution {
    private void swap(int[] nums, int index1, int index2){
        int tmp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = tmp;
    }
    
    public int firstMissingPositive(int[] nums) {
        if(nums.length == 0) return 1;
        int n = nums.length;
        
        for(int i = 0; i < n; i++){
            while(nums[i] > 0 && nums[i] < n && nums[nums[i]-1] != nums[i]){
                swap(nums, nums[i]-1, i);
            }
        }
        
        for(int i = 0; i < n; i++){
            if(nums[i] != i+1){
                return i+1;
            }
        }
        
        return n+1;
    }
}
