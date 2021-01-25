//Ian Hays
//01-25-2021
//https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int index = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]){
                if(index != -1 && i-index-1 < k) return false;
                index = i;
            } 
        }
        return true;
    }
};
