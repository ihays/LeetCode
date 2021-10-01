/***********************************************************************************************
Problem      Longest Common Subsequence
Developer    Ian Hays
Date         10/01/2021
URL          https://leetcode.com/problems/longest-common-subsequence/
Space        O(M*N)
Time         O(M*N)
Description  use dynamic programming to store the longest subsequence. We increase the maximum 
             sequence by 1 for each character match. 
************************************************************************************************/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = size(text1) + 1, n = size(text2) + 1;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                dp[i][j] = (text1[i-1] == text2[j-1]) ? dp[i-1][j-1] + 1 : max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
};
