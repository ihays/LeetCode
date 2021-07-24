/***********************************************************************************************
Problem      Find Center of Star Graph
Developer    Ian Hays
Date         07/23/2021
URL          https://leetcode.com/problems/find-center-of-star-graph/
Space        O(1) 
Time         O(N)
Description  Using a map of size equal to maximum input (100000), store quantities of nodes that 
             appear on edges. The star node should appear in every edge. Return when that node
             appears n times, return -1 otherwise. 
************************************************************************************************/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = size(edges);
        int map[100000] = {};
        for(int i = 0; i < n; i++){
            if(++map[edges[i][0]] == n) return edges[i][0];
            if(++map[edges[i][1]] == n) return edges[i][1];
        }
        return -1;
    }
};
