/***********************************************************************************************
Problem      Min Cost Climbing Stairs
Developer    Ian Hays
Date         05/20/2021
URL          https://leetcode.com/problems/min-cost-climbing-stairs/
Space        O(1) 
Time         O(N)
Description  Use cost vector as an in place DP. We grab the minimum cost between 1 & 2 steps back
             and add to current cost. We return the cheapest cost between the last & second to 
             last step. 
************************************************************************************************/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i = 2; i < cost.size(); i++){
            cost[i] += min(cost[i-1], cost[i-2]);
        }
        return min(cost[cost.size()-1], cost[cost.size()-2]);
    }
};
