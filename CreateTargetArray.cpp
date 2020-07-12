//Ian Hays
//07-12-2020
//https://leetcode.com/problems/create-target-array-in-the-given-order/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            res.insert(res.begin()+index[i], nums[i]);
        }
        return res;
    }
};
