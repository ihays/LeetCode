/***********************************************************************************************
Problem      Pancake Sorting
Developer    Ian Hays
Date         06/01/2021
URL          https://leetcode.com/problems/max-area-of-island/
Space        O(1) 
Time         O(M*N)
Description  BFS through each island keeping track of the maximum area while setting any visited
             location to 0.
************************************************************************************************/

class Solution {
public:
    int m;
    int n; 
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]){
                    grid[i][j] = 0;
                    res = max(res, bfs(i, j, grid));
                }
            }
        }
        return res;
    }
    int dir[5] = {-1, 0, 1, 0, -1};
    
    int bfs(int x, int y, vector<vector<int>>& grid){
        queue<array<int,2>> q;
        q.push({x,y});
        int res = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                res++;
                int row = q.front()[0];
                int col = q.front()[1];
                q.pop();
                for(int j = 1; j < 5; j++){
                    int dirX = dir[j-1];
                    int dirY = dir[j];
                    if(row + dirX < m && row + dirX >= 0 && col + dirY < n && col + dirY >= 0 && grid[row+dirX][col+dirY]){
                        grid[row+dirX][col+dirY] = 0;
                        q.push({row+dirX,col+dirY});
                    } 
                }
            }
        }
        return res;
    }
};
