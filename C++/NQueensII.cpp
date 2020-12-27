//Ian Hays
//12-26-2020
//https://leetcode.com/problems/n-queens-ii/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    int totalNQueens(int n) {
        int res = 0;
        vector<string> board(n, string(n,'.'));
        solveNQueens(res, board, n, 0, 0);
        return res;
    }

    void solveNQueens(int& res, vector<string>& board, int& n, int row, int queens){ 
        if(queens == n){
            res++;
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
