/***********************************************************************************************
Problem      Triangle
Developer    Ian Hays
Date         04/21/2021
URL          https://leetcode.com/problems/triangle/
Space        O(N) 
Time         O(N^2)
Description  DP path values through BFS of triangle. Find minimum value of the last layer.
************************************************************************************************/

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = 1; i < triangle.size(); i++){
            vector<int> curr = triangle[i];
            vector<int> prev = triangle[i-1];
            curr.front() += prev.front();
            for(int j = 1; j < curr.size()-1; j++){
                curr[j] = min(curr[j] + prev[j-1], curr[j] + prev[j]);
            }
            
            curr.back() += prev.back();
            triangle[i] = curr;
        }
        
        int res = INT_MAX;
        for(int i = 0; i < triangle.back().size(); i++){
            res = min(triangle.back()[i], res);
        }
        return res;
    }
};
