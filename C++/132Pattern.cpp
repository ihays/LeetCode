/***********************************************************************************************
Problem      132 Pattern
Developer    Ian Hays
Date         08/09/2021
URL          https://leetcode.com/problems/132-pattern/
Space        O(N) 
Time         O(N)
Description  We store the third value in an integer, second value candidate in a stack. The first
             value is validated when it is less than the third after assigning it in our while loop.
************************************************************************************************/

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int third = INT_MIN;
        stack<int> s;
        for(int i = size(nums)-1; i >= 0; i--){
            if(nums[i] < third) return true;
            while(!s.empty() && nums[i] > s.top()){
                third = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};
