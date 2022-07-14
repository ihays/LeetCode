/***********************************************************************************************
Problem      Two Sum II
Developer    Ian Hays
Date         07/13/2022
URL          https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Space        O(1) 
Time         O(N)
Description  using pointers from each end, find the sum by incrementing or decrementing the right
             or left based on sum. Since it's sorted, we increment left if sum is less than target
             otherwise decrement right. 
************************************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = size(numbers)-1;
        
        while(numbers[l] + numbers[r] != target){
            if(numbers[l] + numbers[r] > target)  r--;
            else l++;
        }
            
        return {l+1, r+1};
    }
};
