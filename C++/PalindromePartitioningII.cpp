/***********************************************************************************************
Problem      Distinct Subsequences
Developer    Ian Hays
Date         03/03/2022
URL          https://leetcode.com/problems/palindrome-partitioning-ii/
Space        O(N^2) 
Time         O(M*N)
Description  Use dynamic programming to store the results of each valid palindrome and number of cuts.
************************************************************************************************/

class Solution {
public:
    int minCut(string s) {
        int n = size(s);
        vector<int> cuts(n);
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        
        for(int i = n-1; i >= 0; i--){
            cuts[i] = n-1 - i;
            for(int j = i; j < n; j++){
                if(s[i] == s[j] && (j-i < 2 || dp[i+1][j-1])){
                    dp[i][j] = true;
                    if(j == n-1){
                        cuts[i] = 0;
                    } else if (cuts[i] > cuts[j+1]+1){
                        cuts[i] = cuts[j+1]+1;
                    }
                }
            }
        }
        return cuts[0];
    }
};
