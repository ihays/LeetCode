/***********************************************************************************************
Problem      Wildcard matching
Developer    Ian Hays
Date         02/25/2022
URL          https://leetcode.com/problems/wildcard-matching/
Space        O(M*N) 
Time         O(M*N)
Description  We store the matching results in a DP vector to build the result. 
************************************************************************************************/

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = size(s), n = size(p);
        vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
        dp[0][0] = true;
        for(int i = 1; i <= size(p) && p[i-1] == '*'; i++){
            dp[0][i] = true;
        }
        
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(p[j-1] == '*'){
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                } else {
                    dp[i][j] = dp[i-1][j-1] && (p[j-1] == s[i-1] || p[j-1] == '?');
                }
            }
        }
        return dp[m][n];
        
    }
};
