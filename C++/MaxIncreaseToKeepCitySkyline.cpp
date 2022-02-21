/***********************************************************************************************
Problem      Max Increase to Keep City Skyline
Developer    Ian Hays
Date         02/21/2022
URL          https://leetcode.com/problems/max-increase-to-keep-city-skyline/
Space        O(M*N) 
Time         O(M*N)
Description  Determine the maximum skyline over each row and each column. Sum the differences   
             between the minimum skyline and height of each building. 
************************************************************************************************/

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m = size(grid), n = size(grid[0]);
        vector<int> maxCol(n, 0), maxRow(m, 0);
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                maxRow[i] = max(maxRow[i], grid[i][j]);
                maxCol[j] = max(maxCol[j], grid[i][j]);
            }
        }
        
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                res += min(maxRow[i],maxCol[j])-grid[i][j];
            }
        }
        return res;
    }
};
