/***********************************************************************************************
Problem      Cut Off Trees For Golf Event
Developer    Ian Hays
Date         02/17/2022
URL          https://leetcode.com/problems/cut-off-trees-for-golf-event/
Space        O(M*N) 
Time         O(M^2*N^2)
Description  xor entire array to cancel out duplicates to return the single number.
************************************************************************************************/

class Solution {
public:
    int cutOffTree(vector<vector<int>>& forest) {
        int m = size(forest), n = size(forest[0]);
        vector<vector<int>> trees;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(forest[i][j] > 1) trees.push_back({forest[i][j], i, j});
            }
        }
        sort(begin(trees), end(trees));
        int sx = 0, sy = 0, res = 0;
                
        for(int i = 0; i < size(trees); i++){
            int dx = trees[i][1], dy = trees[i][2];
            int steps = bfs(forest, sx, sy, dx, dy);
            if(steps == -1) return -1;
            sx = dx, sy = dy;
            res += steps;
        }
        return res;
    }
    
    int bfs(vector<vector<int>>& forest, int sx, int sy, int dx, int dy){
        if(sx == dx && sy == dy) return 0;
        int m = size(forest), n = size(forest[0]);
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        visited[sx][sy] = true;
        queue<pair<int,int>> q;
        
        q.push(make_pair(sx,sy));
        
        int dir[5] = {-1, 0, 1, 0, -1};
        int steps = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                int cx = q.front().first;
                int cy = q.front().second;
                if(cx == dx && cy == dy) return steps;
                q.pop();
                for(int i = 1; i < 5; i++){
                    int xDir = dir[i-1] + cx, yDir = dir[i] + cy;
                    if(xDir < 0 || xDir >= m || yDir < 0 || yDir >= n || visited[xDir][yDir] || forest[xDir][yDir] == 0) continue;
                    visited[xDir][yDir] = true;
                    q.push(make_pair(xDir, yDir));
                }
                
            }
            steps++;
        }
        return -1;
    }
};
