/***********************************************************************************************
Problem      Word Search
Developer    Ian Hays
Date         10/07/2021
URL          https://leetcode.com/problems/word-search/
Space        O(1) 
Time         O(N^2 * 3^k) ~ time complexity is tricky here, we can move in 4 directions at the very 
             beginning during DFS but turns into 3 direction because we can't revisit a node.
Description  DFS + Backtracking - We pass board in by reference and backtrack instead of creating 
             separate copies of itself many times with the recursion 
************************************************************************************************/

class Solution {
public:
    int m, n;
    bool exist(vector<vector<char>>& board, string word) {
        m = size(board), n = size(board[0]);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(dfs(board, word.c_str(), i,j)) return true;
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, const char* w, int i, int j){
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != *w) return false;
        if(*(w+1) == '\0') return true;
        char c = board[i][j];
        board[i][j] = '*';
        if(dfs(board, w+1, i+1, j) || dfs(board, w+1, i-1, j) || dfs(board, w+1, i, j+1) || dfs(board, w+1, i, j-1)) return true;
        board[i][j] = c;
        return false;
    }
};
