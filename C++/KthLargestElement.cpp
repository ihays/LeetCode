//Ian Hays
//07-19-2020
//https://leetcode.com/problems/kth-largest-element-in-an-array/
//SC: O(N) TC: O(N*LOG(N))
//Priority Queue solution to find Kth Larget.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        int res = -1;
        while(k--){
            res = pq.top();
            pq.pop();
        }
        return res;
    }
};
