/***********************************************************************************************
Problem      Dungeon Game
Developer    Ian Hays
Date         03/20/2022
URL          https://leetcode.com/problems/dungeon-game/
Space        O(M*N) 
Time         O(M*N)
Description  Use Dynamic Programming to determine minimum path in the dungeon game by checking
             right and bottom paths. 
************************************************************************************************/

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m = size(dungeon), n = size(dungeon[0]);
        vector<vector<int>> dp(m+1, vector<int>(n+1, INT_MAX));
        dp[m-1][n] = 1;
        dp[m][n-1] = 1;
        
        for(int i = m-1; i >= 0; i--){
            for(int j = n-1; j >= 0; j--){
                dp[i][j] = min(dp[i+1][j], dp[i][j+1]) - dungeon[i][j];
                if(dp[i][j] <= 0){
                    dp[i][j] = 1;
                }
            }
        }
        return dp[0][0];
    }
};
