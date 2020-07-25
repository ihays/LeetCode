//Ian Hays
//07-25-2020
//https://leetcode.com/problems/permutations-ii/
//SC: O(N^2) TC: O(N!)
//Did not use next_permutation() built in function. Recersively call to build permutations using backtracking and set to remove duplicates. 

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> res;   
        permute(nums, res, 0);
        return vector<vector<int>>(res.begin(),res.end());
    }
    
    void permute(vector<int>& nums, set<vector<int>>& res, int l){
        if(l == nums.size()-1){
            res.insert(nums);
            return;
        }
        
        for(int i = l; i < nums.size(); i++){
            swap(nums[i],nums[l]);
            permute(nums, res, l+1);
            swap(nums[i],nums[l]); //backtrack
        }
        return;
    }
};
