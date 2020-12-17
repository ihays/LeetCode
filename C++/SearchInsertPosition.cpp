//Ian Hays
//12-17-20
//https://leetcode.com/problems/search-insert-position/
//SC: O(1) TC: O(LOG(N))

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0; 
        int r = nums.size()-1;
        int m = (r - l)/2;
        
        while(l <= r){
            if(nums[m] < target){
                l = m+1;
            } else {
                r = m-1;
            }
            m = l + (r - l)/2;
            
        }
        
        return m;
    }
};
