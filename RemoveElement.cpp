//Ian Hays
//07-06-2020
//https://leetcode.com/problems/remove-element/
//SC: O(1) TC: O(N)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==val){
                nums.erase(nums.begin() + i);    
                i--;
            } 
        }
        return nums.size();
    }
};
