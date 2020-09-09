  
//Ian Hays
//07-26-2020
//https://leetcode.com/problems/shortest-distance-from-all-buildings/
//SC: O(MN) TC: O(M^2*N^2) - Running a MN nested for loop nested with an MN BFS
//We from each building accumulating the distances on the distances 2D vector. We return the minimum valid distance.
//if no valid distance exists, we return -1.

class Solution {
public:
    int m;
    int n;
    void bfs(vector<vector<int>>& grid, vector<vector<int>>& distances, int x, int y, int& valid){
        queue<pair<int,int>> q;
        q.push(make_pair(x,y));
        int distance = 0;
        while(!q.empty()){
            int k = q.size();
            distance++;
            for(int i = 0; i < k; i++){
                pair<int,int> p = q.front();
                x = p.first;
                y = p.second;
                q.pop();
                if(x-1 >= 0 && grid[x-1][y] == valid-10){
                    distances[x-1][y] += distance;
                    grid[x-1][y] = valid;
                    q.push(make_pair(x-1,y));
                }
                if(y-1 >= 0 && grid[x][y-1] == valid-10){
                    distances[x][y-1] += distance;
                    grid[x][y-1] = valid;
                    q.push(make_pair(x,y-1));                
                }
                if(x+1 < m  && grid[x+1][y] == valid-10){
                    distances[x+1][y] += distance;
                    grid[x+1][y] = valid;
                    q.push(make_pair(x+1,y));                    
                }
                if(y+1 < n  && grid[x][y+1] == valid-10){
                    distances[x][y+1] += distance;
                    grid[x][y+1] = valid;
                    q.push(make_pair(x,y+1));                    
                }
            }
        }
    }
    
    int shortestDistance(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int valid = 0;
        vector<vector<int>> distances(m, vector<int>(n,0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1) {
                    valid+=10;
                    bfs(grid,distances,i,j,valid);
                }
            }
        }
        int res = INT_MAX;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == valid){
                    res = min(res, distances[i][j]);    
                }
            }
        }
        return res == INT_MAX ? -1 : res;
    }
};
