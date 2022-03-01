/***********************************************************************************************
Problem      Maximal Rectangle
Developer    Ian Hays
Date         03/01/2022
URL          https://leetcode.com/problems/maximal-rectangle/
Space        O(M*N) 
Time         O(M*N)
Description  We store DP values for amount of 1's to the right. DP values up/down to store amount
             of rows that match width. We return maximal rectangle.
************************************************************************************************/

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& M) {
        int m = size(M), n = size(M[0]);
        vector<vector<short>> dp(m+1, vector<short>(n+1)), up(m, vector<short>(n)), down(up);
        
        for(int i = m-1; ~i; i--){
            for(int j = n-1; ~j; j--){
                dp[i][j] = M[i][j] == '1' ? dp[i][j+1] + 1: 0;
            }
        }
        
        stack<int> s;
        for(int j = 0; j < n; j++){
            s = stack<int>();
            for(int i = 0; i < m; i++){
                while(size(s) && M[i][j] == '1' && dp[i][j] <= dp[s.top()][j]) s.pop();
                up[i][j] = i - (size(s) ? s.top() : -1);
                s.push(i);
            }
            s = stack<int>();
            for(int i = m-1; ~i; i--){
                while(size(s) && M[i][j] == '1' && dp[i][j] <= dp[s.top()][j]) s.pop();
                down[i][j] = (size(s) ? s.top() : m) - i;
                s.push(i);
            }
        }
        
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(M[i][j] == '1')
                    res = max(res, (up[i][j] + down[i][j] -1) * dp[i][j]);
            }
        }
        return res;
    }
};
