/***********************************************************************************************
Problem      Perfect Squares
Developer    Ian Hays
Date         10/14/2021
URL          https://leetcode.com/problems/perfect-squares/
Space        O(N) 
Time         O(N*LOG(N))
Description  Iterative DP allows us to build the minimum squares for each entry leading up to n. 
             Recursive starts with grabbing the largest square, and divides its quantity to determine
             minimum squares. 
************************************************************************************************/
//Iterative DP
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, 0);
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

//Recursive
class Solution {
public:
    int numSquares(int n, int count = 0) {
        if(n == 0) return count;
        int res = INT_MAX;
        for(int i = floor(sqrt(n)); i > 0; i--){
            int square = i*i;            
            res = min(res, numSquares(n%square, count + (n/square)));
        }
        return res;
    }
    
};
