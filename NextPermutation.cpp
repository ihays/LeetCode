//Ian Hays
//07-21-2020
//https://leetcode.com/problems/next-permutation/
//SC: O(1) TC: O(N*LOG(N))

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
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
    }
};
