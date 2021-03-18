/***********************************************************************************************
Problem      Wiggle Subsequence
Developer    Ian Hays
Date         03/18/2021
URL          https://leetcode.com/problems/wiggle-subsequence/
Space        O(N) 
Time         O(N^2)
Description  DP max values for the last fluctuation up and down. For each index, grab the largest
             value of opposite fluctuation + 1.
************************************************************************************************/

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        vector<int> up(nums.size(), 1);
        vector<int> dwn(nums.size(), 1);
        
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    up[i] = max(up[i], dwn[j]+1);
                } else if(nums[i] < nums[j]){
                    dwn[i] = max(dwn[i], up[j]+1);
                }
            }
        }
        return max(up.back(), dwn.back());
    }
};
