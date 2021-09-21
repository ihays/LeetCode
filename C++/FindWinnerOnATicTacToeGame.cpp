/***********************************************************************************************
Problem      Find Winner on a Tic Tac Toe Game
Developer    Ian Hays
Date         09/20/2021
URL          https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/
Space        O(1) 
Time         O(1)
Description  Build board and then compare to win cases to determine the outcome.
************************************************************************************************/

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        if(size(moves) < 5) return "Pending";
        vector<vector<string>> board(3, vector<string>(3, " "));
        for(int i = 0; i < size(moves); i++){
            board[moves[i][0]][moves[i][1]] = i%2 ? "B" : "A";  
        }
        return wincase(board, size(moves));
    }
    
    string wincase(vector<vector<string>> board, int moves){
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != " ") return board[0][0];
        if(board[0][0] == board[0][1] && board[0][0] == board[0][2] && board[0][0] != " ") return board[0][0];
        if(board[0][0] == board[1][0] && board[0][0] == board[2][0] && board[0][0] != " ") return board[0][0];
        if(board[1][0] == board[1][1] && board[1][0] == board[1][2] && board[1][0] != " ") return board[1][0];
        if(board[2][0] == board[2][1] && board[2][0] == board[2][2] && board[2][0] != " ") return board[2][0];
        if(board[0][1] == board[1][1] && board[0][1] == board[2][1] && board[0][1] != " ") return board[0][1];
        if(board[0][2] == board[1][2] && board[0][2] == board[2][2] && board[0][2] != " ") return board[0][2];
        if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != " ") return board[0][2];
        return moves == 9 ? "Draw" : "Pending";
    }
};
