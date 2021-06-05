/***********************************************************************************************
Problem      Maximum Performance of a Team
Developer    Ian Hays
Date         06/05/2021
URL          https://leetcode.com/problems/maximum-performance-of-a-team/
Space        O(N)
Time         O(N)
Description  Sort engineer's efficiency/speed by efficiency descending. While using a minheap, we
             push and sum speed values while iterating through sorted engineers. If the heap is 
             larger than k (maximum number of engineers), we pop the smallest speed engineer from
             minheap. We find the maximum speed * efficiency of each iteration to return. 
************************************************************************************************/

class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> engineers;
        for(int i = 0; i < n; i++){
            engineers.emplace_back(efficiency[i],speed[i]);
        }
        sort(rbegin(engineers), rend(engineers));
        long totalSpeed = 0;
        long res = 0;
        priority_queue<int, vector<int>, greater<int>> minheap;
        for(auto &[e, s]: engineers){
            totalSpeed += s;
            minheap.push(s);
            if(minheap.size() > k){
                totalSpeed -= minheap.top();
                minheap.pop();
            }
            res = max(res, totalSpeed * e);
        }
        return  res % (int)(1e9 + 7);
    }
};
