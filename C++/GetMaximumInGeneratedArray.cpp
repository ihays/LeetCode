//Ian Hays
//01-15-2021
//https://leetcode.com/problems/get-maximum-in-generated-array/
//SC: O(N) TC: O(N)

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n <= 1) return n;
        vector<int> nums(n + 1, 0);
        nums[0] = 0;
        nums[1] = 1;
        int res = 1;
        for(int i = 1; 2 * i <= n; i++){
            nums[2 * i] = nums[i];
            if(2 * i + 1 <= n){
                nums[2 * i + 1] = nums[i] + nums[i + 1];
                res = max(nums[2 * i + 1], res);
            } 
        }  
        return res;
    }
};
