/***********************************************************************************************
Problem      Distinct Subsequences
Developer    Ian Hays
Date         03/02/2022
URL          https://leetcode.com/problems/distinct-subsequences/
Space        O(M) 
Time         O(M*N)
Description  store the results of distinct subsequences in a 1D array bottom up memoization.
************************************************************************************************/

class Solution {
public:
    int numDistinct(string s, string t) {
        int m = size(t), n = size(s);
        vector<unsigned long> dp(m+1);
        dp[0] = 1;
        for(int j = 1; j <= n; j++){
            for(int i = m; i >= 1; i--){
                dp[i] = dp[i] + (s[j-1] == t[i-1] ? dp[i-1] : 0);
            }
        }
        return dp[m];
    }
};
