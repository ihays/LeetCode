/***********************************************************************************************
Problem      Number of Valid Subarrays
Developer    Ian Hays
Date         08/26/2021
URL          https://leetcode.com/problems/number-of-valid-subarrays/
Space        O(N)
Time         O(N)
Description  Using a stack to store quantity of valid subarrays. We remove from stack anytime the
             most recently evaluated number is greater than our current number. Increment res each
             loop and return.
************************************************************************************************/

class Solution {
public:
    int validSubarrays(vector<int>& nums) {
        stack<int> s;
        int res = 0;
        for(int num: nums){
            while(!s.empty() && num < s.top()) s.pop();
            s.push(num);
            res += size(s);
        }
        return res;
    }
};
