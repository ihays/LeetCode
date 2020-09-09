//Ian Hays
//07-25-2020
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
//SC: O(1) TC: O(N)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = INT_MAX;
        
        for(int num: nums){
            res = min(res,num);
        }
        return res;
    }
};
