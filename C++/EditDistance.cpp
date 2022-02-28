/***********************************************************************************************
Problem      Edit Distance
Developer    Ian Hays
Date         02/27/2022
URL          https://leetcode.com/problems/edit-distance/
Space        O(M*N)
Time         O(M*N)
Description  Use DP to store the minimum edits to transform from word1 to word2. 
************************************************************************************************/

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = size(word1), n = size(word2);
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for(int i = 1; i <= m; i++){
            dp[i][0] = i;
        }
        for(int i = 1; i <= n; i++){
            dp[0][i] = i;
        }
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                } else {
                    dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]))+1;
                }
            }
        }
        return dp[m][n];
    }
};
