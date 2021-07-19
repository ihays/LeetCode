/***********************************************************************************************
Problem      Maximum Product Difference Between Two Pairs
Developer    Ian Hays
Date         07/18/2021
URL          https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
Space        O(1) 
Time         O(N)
Description  Iterate the array to assign the 2 minimum elements and 2 maximum elements to integer
             values. Return the difference in products.
************************************************************************************************/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX, max1 = INT_MIN, max2 = INT_MIN;
        for(auto num: nums){
            if(num < min1){
                min2 = min1;
                min1 = num;
            } else if(num < min2){
                min2 = num; 
            }    
            if(num > max1){
                max2 = max1;
                max1 = num;
            } else if(num > max2){
                max2 = num;
            }
        }
        return max1 * max2 - min1 * min2;
    }
};
