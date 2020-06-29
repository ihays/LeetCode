//Ian Hays
//06-29-2020
//https://leetcode.com/problems/perfect-squares
//SC: O(N) TC: O(N*log(N))
//Knapsack DP 1D 

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        
        for(int i = 1; i <= n; i++){
            int squares = INT_MAX;
            for(int j = 1; j*j <= i; j++){
                squares = min(squares, dp[i-j*j] + 1); 
            }
            dp[i] = squares;
        }
        
        return dp[n];
    }
};
