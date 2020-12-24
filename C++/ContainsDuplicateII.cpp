//Ian Hays
//12-24-2020
//https://leetcode.com/problems/contains-duplicate-ii/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int i = 0; i < nums.size();i++){
            if(umap[nums[i]] != 0 && i+1 - umap[nums[i]] <= k) return true;
            umap[nums[i]] = i+1;
        }
        return false;
    }
};
