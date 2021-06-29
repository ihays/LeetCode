/***********************************************************************************************
Problem      Max Consecutive Ones III
Developer    Ian Hays
Date         06/29/2021
URL          https://leetcode.com/problems/max-consecutive-ones-iii/
Space        O(1)
Time         O(N)
Description  Use sliding windows to collect 0's. When the # of 0's exceeds k, we move left side
             of window. Track the maximum window size, and return.
************************************************************************************************/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res{};
        for(int l{},r{}; r < size(nums); r++){
            if(!nums[r]) k--;
            while(k < 0) if(!nums[l++]) k++;
            res = max(res,r-l+1);
        }
        return res;
    }
};
