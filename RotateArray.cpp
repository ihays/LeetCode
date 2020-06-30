  
//Ian Hays
//06-29-2020
//https://leetcode.com/problems/rotate-array/
//SC: O(N) TC: O(1)
//reverse whole array, reverse partitions based on k mod size of array.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);      
    }
    void reverse(vector<int>& nums, int l, int r){
        while(l < r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }
    }
};
