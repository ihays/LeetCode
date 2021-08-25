/***********************************************************************************************
Problem      Unique Paths III
Developer    Ian Hays
Date         08/25/2021
URL          https://leetcode.com/problems/unique-paths-iii/
Space        O(3^N) - N = number of spaces to move  
Time         O(N) - N = number of DFS on stack
Description  We count the target number of steps required to complete a path. DFS through grid until
             ending square is found and then return if steps match target. We use back tracking to
             set visited squares, and reset them when dfs is complete to save on memory in the stack. 
************************************************************************************************/

class Solution {
public:
    int m, n;
    int uniquePathsIII(vector<vector<int>>& grid) {
        int x = 0, y = 0, target = 0;
        m = size(grid), n = size(grid[0]);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    x = i, y = j;
                } else if(grid[i][j] != -1){
                    target++;
                }
            }
        }
        return dfs(grid, 0, target, x, y);
    }
    
    int dfs(vector<vector<int>>& g, int s, int t, int x, int y){
        if(x >= m || y >= n || x < 0 || y < 0 || g[x][y] == -1) return 0;
        if(g[x][y] == 2) return s == t;
        g[x][y] = -1;
        int p = dfs(g, s+1, t, x+1, y) + dfs(g, s+1, t, x, y+1) + dfs(g, s+1, t, x-1, y) + dfs(g, s+1, t, x, y-1); 
        g[x][y] = 0;
        return p;
    }
};
