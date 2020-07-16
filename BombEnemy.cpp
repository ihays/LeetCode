//Ian Hays
//07-15-2020
//https://leetcode.com/problems/bomb-enemy/
//SC: O(1) TC: O(N^3)
//Constant space solution

class Solution {
public:
    int maxKilledEnemies(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '0'){
                    int u = i, d = i, l = j, r = j, count = 0;
                    while(u >= 0){
                        if(grid[u][j] == 'E') count++;  
                        if(grid[u][j] == 'W') u = 0;
                        u--;
                    }
                    while(d < m){
                        if(grid[d][j] == 'E') count++;  
                        if(grid[d][j] == 'W') d = m;
                        d++;
                    } 
                    while(l >= 0){
                        if(grid[i][l] == 'E') count++;  
                        if(grid[i][l] == 'W') l = 0;
                        l--;
                    }
                    while(r < n){
                        if(grid[i][r] == 'E') count++;  
                        if(grid[i][r] == 'W') r = n;
                        r++;
                    }
                    res = max(res,count);
                }
            } 
        }
        return res;
    }
};
