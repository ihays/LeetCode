/***********************************************************************************************
Problem      Out Of Boundary Paths
Developer    Ian Hays
Date         06/24/2021
URL          https://leetcode.com/problems/out-of-boundary-paths/
Space        O(1)
Time         O(M*N*maxMove) 
Description  Using a DP vector, hold the number of paths relative to max moves left. Add all 
             directions recursively, returning 1 when the base case is reached. 
************************************************************************************************/

class Solution {
public:
    const int mod = 1e9 + 7;
    const int dir[5] = {0, 1, 0, -1, 0};
    int dp[50][50][51] = {[0 ... 49] = {[0 ... 49] = {[0 ... 50] = -1}}};
    bool outOfBounds(int m, int n, int r, int c){
        return r >= m || r < 0 || c >= n || c < 0;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        bool isOutOfBounds = outOfBounds(m,n,startRow,startColumn);
        if(isOutOfBounds || maxMove == 0) return isOutOfBounds;
        if(dp[startRow][startColumn][maxMove] != -1) return dp[startRow][startColumn][maxMove];
        dp[startRow][startColumn][maxMove] = 0;
        for(int i = 1; i < 5; i++){
            dp[startRow][startColumn][maxMove] = (dp[startRow][startColumn][maxMove] + findPaths(m, n, maxMove-1, startRow + dir[i-1], startColumn + dir[i])) % mod;
        }
        return dp[startRow][startColumn][maxMove] % mod;
    }
};


