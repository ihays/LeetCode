/***********************************************************************************************
Problem      Subsets II
Developer    Ian Hays
Date         06/24/2021
URL          https://leetcode.com/problems/subsets-ii/
Space        O(N) 
Time         O(N!)
Description  after sorting and uing backtracking, build subsets.
************************************************************************************************/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> res;
        vector<int> subset;    
        buildSubset(res, nums, subset, 0);
        return res; 
    }
    
    void buildSubset(vector<vector<int>>& res, vector<int>& nums, vector<int>& subset, int index){
        res.push_back(subset);
        for(int i = index; i < size(nums); i++){
            if(i == index || nums[i-1] != nums[i]){
                subset.push_back(nums[i]);
                buildSubset(res, nums, subset, i+1);
                subset.pop_back();
            }
        }
    }
};
