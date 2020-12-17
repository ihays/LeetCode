//Ian Hays
//12-17-20
//https://leetcode.com/problems/search-insert-position/
//SC: O(1) TC: O(LOG(N))

public class Solution {
    public int SearchInsert(int[] nums, int target) {
        int left = 0;
        int right = nums.Length-1;
        int middle = (right - left)/2;
        while(left <= right)
        {
            if(nums[middle] < target)
            {
                left = middle + 1;
            } 
            else 
            {
                right = middle - 1;
            }
            middle = left + (right - left)/2;
        }
        
        return middle;
    }
}
