//Ian Hays
//07-11-2020
//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
//SC: O(N^2) TC: O(N*Log(N))

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int> res = nums;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(!umap[nums[i]]){
                umap[nums[i]] = i+1;    
            }
        }
        
        for(int i = 0; i < res.size(); i++){
            res[i] = umap[res[i]]-1;
        }
        
        return res;
    }
};
