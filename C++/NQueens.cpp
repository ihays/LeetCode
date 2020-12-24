//Ian Hays
//12-24-2020
//https://leetcode.com/problems/n-queens/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n, string(n,'.'));
        solveNQueens(res, board, n, 0, 0);
        return res;
    }
    
    void solveNQueens(vector<vector<string>>& res, vector<string>& board, int& n, int row, int queens){ 
        if(queens == n){
            res.push_back(board);
            return;
        } 
        
        for(int col = 0; col < n; col++){
            if(isValid(board,row,col,n)){
                board[row][col] = 'Q';
                solveNQueens(res,board,n,row+1,queens+1);
                board[row][col] = '.';
            }
        }
        
    }
    
    bool isValid(vector<string>& board, int& row, int& col, int& n){
        for(int i = 0; i < n; i++){
            if(board[row][i] == 'Q') return false;
        }
        for(int i = row; i >= 0; i--){
            if(board[i][col] == 'Q') return false;
        }
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--){
            if(board[i][j] == 'Q') return false;
        }
        
        for(int i = row, j = col; i >= 0 && j < board[i].size(); i--, j++){
            if(board[i][j] == 'Q') return false;
        }
        
        return true;
    }
    
    
};
