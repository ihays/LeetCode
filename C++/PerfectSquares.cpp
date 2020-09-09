//Ian Hays
//06-29-2020
//https://leetcode.com/problems/perfect-squares
//SC: O(N^2) TC: O(N^2)
//Knapsack DP 2D

class Solution {
public:
    int numSquares(int n) {
        vector<vector<int>> knapsack;
        vector<int> squares;
        for(int i = 0; i*i <= n; i++){
            knapsack.push_back(vector<int>(n+1));
            squares.push_back(i*i);
        }
       
        int m = squares.size();
       
        for(int i = 0; i < n+1; i++){
            knapsack[0][i] = INT_MAX;
        }
       
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n+1; j++){
                knapsack[i][j] = knapsack[i-1][j];
                if(j >= squares[i]){
                    knapsack[i][j] = min(knapsack[i][j], 1 + knapsack[i][j-squares[i]]);
                }
            }
        }
        return knapsack[m-1][n];
    }
};
