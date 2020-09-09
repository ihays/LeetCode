//Ian Hays
//07-17-2020
//https://leetcode.com/problems/word-search/
//SC: O(1) TC: O(N^2 * 3^k) ~ time complexity is tricky here, we can move in 4 directions at the very beginning during DFS, 
//but turns into 3 direction because we can't revisit a node.
//DFS + Backtracking - We pass board in by reference and backtrack instead of creating separate copies of itself many times with the recursion

class Solution {
public:
    int m;
    int n;
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(dfs(board, i, j, word.c_str())){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, int i, int j, const char* w){
        if(i < 0 || j < 0 || i >= m || j >= n || board[i][j] == '*' || *w != board[i][j]) return false;
        if(*(w+1) == '\0') return true;
        char t = board[i][j];
        board[i][j] = '*';
        if(dfs(board, i+1, j, w+1) || dfs(board, i, j+1, w+1) || dfs(board, i-1, j, w+1) || dfs(board, i, j-1, w+1)){
            return true;
        } 
        board[i][j] =  t;
        return false;
    }
};
