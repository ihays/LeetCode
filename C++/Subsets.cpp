/***********************************************************************************************
Problem      Subsets
Developer    Ian Hays
Date         02/12/2022
URL          https://leetcode.com/problems/subsets/
Space        O(2^N) 
Time         O(2^N)
Description  DFS through each word as a set until end word is found. 
************************************************************************************************/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res (1, vector<int>());
        for(int i = 0; i < size(nums); i++){
            int m = size(res);
            for(int j = 0; j < m; j++){
                vector<int> tmp = res[j];
                tmp.push_back(nums[i]);
                res.push_back(tmp);
            }
        }
        return res;
    }
};
