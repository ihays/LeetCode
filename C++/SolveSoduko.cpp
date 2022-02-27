/***********************************************************************************************
Problem      Solve Soduko
Developer    Ian Hays
Date         02/27/2022
URL          https://leetcode.com/problems/sudoku-solver/
Space        O(k*k!^k) k = 9
Time         O(k*k!^k) k = 9
Description  iterating through each cell on the sudoku, we determine a value 1-9 that is valid and
             recursively test possibilities until sudoku is solved. 
************************************************************************************************/

class Solution {
public:
    bool isValidSoduko(vector<vector<char>>& board, int row, int col, char ch){
        for(int i = 0; i < 9; i++){
            if(i != col && board[row][i] == ch) 
                return false;    
        }
            
        for(int i = 0; i < 9; i++){
            if(i != row && board[i][col] == ch) 
                return false;
        }
        
        int x = row - row%3, y = col - col%3;
        for(int i = x; i < x + 3; i++){
            for(int j = y; j < y + 3; j++){
                if(board[i][j] == ch) return false;
            }
        }
        return true;
        
    }
    bool solve(vector<vector<char>>& board, int row, int col){
        if(row == 9)
            return true;
        if(col == 9)
            return solve(board, row+1, 0);  
        if(board[row][col] != '.') 
            return solve(board, row, col+1);
        for(char ch = '1'; ch <= '9'; ch++){
            if(isValidSoduko(board,row,col, ch)){
                board[row][col] = ch;
                if(solve(board,row,col+1)) return true;    
                board[row][col] = '.';
            } 
        }
        return false;
    }
    
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
