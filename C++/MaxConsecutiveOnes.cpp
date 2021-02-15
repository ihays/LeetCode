//Ian Hays
//02-15-2021
//https://leetcode.com/problems/max-consecutive-ones/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int curr = 0;
        for(auto isOne : nums){
            curr = isOne ? curr + 1 : 0;
            res = max(res,curr);
        }
        return res;
    }
};
