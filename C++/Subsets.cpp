//Ian Hays
//07-11-2020
//https://leetcode.com/problems/subsets/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res(1, vector<int>());
        for(int i = 0; i < nums.size(); i++){
            int m = res.size();
            for(int j = 0; j < m; j++){
                vector<int> tmp = res[j];
                tmp.push_back(nums[i]);
                res.push_back(tmp);
            }
        }
        return res;
    }
};
