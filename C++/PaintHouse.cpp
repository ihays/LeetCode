/***********************************************************************************************
Problem      Paint House
Developer    Ian Hays
Date         06/01/2021
URL          https://leetcode.com/problems/paint-house/
Space        O(1) 
Time         O(N)
Description  Use input vector as a way to use DP to store the minimum cost of a color. Return the 
             cheapest color as the return value. 
************************************************************************************************/

class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        for(int i = 1; i < costs.size(); i++){
            costs[i][0] += min(costs[i-1][1],costs[i-1][2]);
            costs[i][1] += min(costs[i-1][0],costs[i-1][2]);
            costs[i][2] += min(costs[i-1][0],costs[i-1][1]);
        }
        return min(min(costs[costs.size()-1][0],costs[costs.size()-1][1]), costs[costs.size()-1][2]);
    }
};

