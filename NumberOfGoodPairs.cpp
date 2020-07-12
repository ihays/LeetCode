//Ian Hays
//07-12-2020
//https://leetcode.com/problems/number-of-good-pairs/
//SC: O(1) TC: O(N^2)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]) res++;
            }
        }
        return res;
    }
};
