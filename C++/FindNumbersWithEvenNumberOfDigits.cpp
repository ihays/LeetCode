//Ian Hays
//07-12-2020
//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
//SC: O(1) TC: O(N)

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(auto it: nums){
            res+=(int)(log10(it))&1;
        }
        return res;
    }
};
