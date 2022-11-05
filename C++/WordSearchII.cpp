/***********************************************************************************************
Problem      Word Search II
Developer    Ian Hays
Date         11/15/2022
URL          https://leetcode.com/problems/word-search-ii/
Space        O(N^2) 
Time         O(N^2 * 3^k) ~ time complexity is tricky here, we can move in 4 directions at the very 
             beginning during DFS but turns into 3 direction because we can't revisit a node.
Description  Map to store starting locations, BFS to traverse through word search.
************************************************************************************************/

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int m = size(board);
        int n = size(board[0]);

        unordered_map<char, vector<pair<int,int>>> startLoc;

        for(int i = 0; i < size(board); i++){
            for(int j = 0; j < size(board[0]); j++){
                startLoc[board[i][j]].push_back(make_pair(i,j));
            }
        }
        vector<string> res;
        for(auto word: words){
            vector<pair<int,int>> start = startLoc[word[0]];
            for(int i = 0; i < start.size(); i++){
                int index = 1;
                queue<pair<int,int>> q;
                q.push(start[i]);
                bool found = false;

                vector<vector<bool>> visited(n, vector<bool>(m, false)); 
                while(!q.empty() && !found){
                    int size = q.size();
                    while(size--){
                        int x = q.front().first;
                        int y = q.front().second;
                        visited[x][y] = true;
                        q.pop();

                        if(x+1 < m && word[index] == board[x+1][y] && !visited[x+1][y]){
                            q.push(make_pair(x+1, y));
                        } 
                        if(x-1 >= 0 && word[index] == board[x-1][y] && !visited[x-1][y]){
                            q.push(make_pair(x-1, y));            
                        } 
                        if(y+1 < n && word[index] == board[x][y+1] && !visited[x][y+1]){
                            q.push(make_pair(x, y+1));
                        } 
                        if(y-1 >= 0 && word[index] == board[x][y-1] && !visited[x][y-1]){
                            q.push(make_pair(x, y-1));
                        } 
                    }
                    if(!q.empty()) index++;
                    if(index == word.size()) found = true;
                }
                if(found){
                    res.push_back(word);
                    break;
                } 
            }
        }
        return res;
    }
};
