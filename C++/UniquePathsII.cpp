/***********************************************************************************************
Problem      Unique Paths II
Developer    Ian Hays
Date         04/28/2021
URL          https://leetcode.com/problems/unique-paths-ii/
Space        O(M*N) 
Time         O(M*N)
Description  Dynamic Program the results in to a MxN grid. We sum the path count only if the location
             is not an obstacle. Return the final sums on at position (M,N).
************************************************************************************************/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        dp[0][1] = 1;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(!obstacleGrid[i-1][j-1]){
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        
        return dp[m][n];
    }
};
