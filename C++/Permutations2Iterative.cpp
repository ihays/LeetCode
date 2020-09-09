//Ian Hays
//07-25-2020
//https://leetcode.com/problems/permutations-ii/
//SC: O(N^2) TC: O(N!)
//Did not use built in next_permutation() while using iterative approach.

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        do{
            res.push_back(nums);
        } while(nextPermutation(nums) != -1);
        
        return res;
    }
    
    int nextPermutation(vector<int>& nums) {
        int pivot = -1;
        for(int i = nums.size()-1; i > 0; i--){
            if(nums[i-1] < nums[i]){
                pivot = i-1;
                break;
            }
        }
        if(pivot != -1){
            int succ = nums.size()-1;
            while(nums[pivot] >= nums[succ]){
                succ--;            
            } 
            swap(nums[pivot],nums[succ]);
        }
        reverse(nums.begin()+pivot+1,nums.end());
        return pivot;
    }

};
