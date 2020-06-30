//Ian Hays
//06-30-2020
//https://leetcode.com/problems/contains-duplicate/
//SC: O(N) TC: O(N)
//store in HashMap the quantity until we reach 2, or return false

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i = 0; i < nums.size(); i++){
            if(++umap[nums[i]] == 2) return true;
        }
        return false;
    }
};
