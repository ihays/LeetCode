/***********************************************************************************************
Problem      Sort Even and Odd Indices Independently
Developer    Ian Hays
Date         2/9/2022
URL          https://leetcode.com/problems/sort-even-and-odd-indices-independently/
Space        O(N) 
Time         O(N*LOG(N))
Description  push odd/even into their own priority queue based on sorting increasing/decreasing.
             replace elements in input array with sorted elements from priority queue and return.
************************************************************************************************/

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int> pq_odd;
        priority_queue<int, vector<int>, greater<int>> pq_even;
        
        for(int i = 0; i < size(nums); i++){
            if(i%2) pq_odd.push(nums[i]);
            else pq_even.push(nums[i]);
        }
         
        for(int i = 0; i < size(nums); i++){
            if(i%2){
                nums[i] = pq_odd.top();
                pq_odd.pop();
            } else {
                nums[i] = pq_even.top();
                pq_even.pop();
            }
        }
        return nums;
    }
};
