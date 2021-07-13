/***********************************************************************************************
Problem      Bomb Enemy
Developer    Ian Hays
Date         07/13/2021
URL          https://leetcode.com/problems/bomb-enemy/
Space        O(1)
Time         O(N^3)
Description  For each location on the grid, count the number of enemies in the line up to a wall.
             Return the maximum enemies. 
************************************************************************************************/
class Solution {
public:
    int maxKilledEnemies(vector<vector<char>>& grid) {
        int res = 0;                         
        for(int i = 0; i < size(grid); i++){
            for(int j = 0; j < size(grid[0]); j++){
                if(grid[i][j] == '0') res = max(getCount(i,j,grid),res);   
            }
        }
        return res;
    }
                                 
    int getCount(int x, int y, vector<vector<char>>& grid){
        int count = 0;
        for(int i = x+1; i < size(grid); i++){
            if(grid[i][y] == 'W') break;
            if(grid[i][y] == 'E') count++;
        }
        
        for(int i = x-1; i >= 0; i--){
            if(grid[i][y] == 'W') break;
            if(grid[i][y] == 'E') count++;
        }
        
        for(int j = y+1; j < size(grid[x]); j++){
            if(grid[x][j] == 'W') break;
            if(grid[x][j] == 'E') count++;
        }
        
        for(int j = y-1; j >= 0; j--){
            if(grid[x][j] == 'W') break;
            if(grid[x][j] == 'E') count++;
        }
        return count;
    }
};
