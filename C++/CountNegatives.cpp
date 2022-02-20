/***********************************************************************************************
Problem      Count Negatives
Developer    Ian Hays
Date         02/19/2022
URL          https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
Space        O(1) 
Time         O(M*N)
Description  since the matrix is sorted left to right, top to bottom, we count negatives based on 
             break point locations of negative values.
************************************************************************************************/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = size(grid), n = size(grid[0]), col = n-1, res = 0;
        for(int i = 0; i < m; i++){
            while(col >= 0 && grid[i][col] < 0) col--;
            res += n-col-1;
        }
        return res;
    }
};
