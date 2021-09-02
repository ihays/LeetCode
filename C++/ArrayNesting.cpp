/***********************************************************************************************
Problem      Array Nesting
Developer    Ian Hays
Date         09/01/2021
URL          https://leetcode.com/problems/array-nesting/
Space        O(1) 
Time         O(N)
Description  We iterate through index loops and return the largest array nest. 
************************************************************************************************/

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<bool> visited(size(nums), false);
        int res = 0;
        for(int num: nums){
            int count = 0;
            while(!visited[num]){
                visited[num] = true;
                num = nums[num];
                count++;
            }
            res = max(count, res);
        }
        return res;
    }
};
