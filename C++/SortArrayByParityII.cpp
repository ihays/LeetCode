/***********************************************************************************************
Problem      Sort Array By Parity II
Developer    Ian Hays
Date         09/28/2021
URL          https://leetcode.com/problems/sort-array-by-parity-ii/
Space        O(1)
Time         O(N)
Description  We store odd/even values in respective array and then place into result array.
************************************************************************************************/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd, even, res;
        
        for(auto num: nums){
            if(num%2){
                odd.push_back(num);
            } else {
                even.push_back(num);
            }
        }
        
        for(int i = 0; i < size(nums); i++){
            if(i%2){
                res.push_back(odd.back());
                odd.pop_back();
            } else {
                res.push_back(even.back());
                even.pop_back();
            }
        }
        return res;
    }
};
