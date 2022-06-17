/***********************************************************************************************
Problem      Product Except Self
Developer    Ian Hays
Date         06/17/2022
URL          https://leetcode.com/problems/product-of-array-except-self/
Space        O(N) 
Time         O(N)
Description  Keep track products to the right and left and accumulate the result vector with results
************************************************************************************************/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int maxRight = 1;
        int maxLeft = 1;
        int n = size(nums);
        
        vector<int> res(n, 1);
        
        for(int i = 0; i < n; i++){
            res[i] *= maxLeft;
            maxLeft *= nums[i];
            res[n-i-1] *= maxRight;
            maxRight *= nums[n-i-1];
        }
        
        return res;
    }
};
