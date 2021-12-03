/***********************************************************************************************
Problem      Find Target Indices After Sorting Array
Developer    Ian Hays
Date         12/2/2021
URL          https://leetcode.com/problems/find-target-indices-after-sorting-array/
Space        O(N) 
Time         O(N*LOG(N))
Description  Sort vector and iterate pushing back the indices where the number is equal to target.
************************************************************************************************/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(begin(nums),end(nums));
        vector<int> res;
        for(int i = 0; i < size(nums); i++){
            if(nums[i] == target) res.push_back(i);
        }
        return res;
    }
};
