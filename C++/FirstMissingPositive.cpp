//Ian Hays
//08-27-2020
//https://leetcode.com/problems/first-missing-positive/
//SC: O(1) TC: O(N)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i]-1] != nums[i]){
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]-1 != i){
                return i+1;
            }
        }
        
        return nums.size()+1;
    }
};
