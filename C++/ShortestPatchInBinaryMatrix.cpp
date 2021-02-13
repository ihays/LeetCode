//Ian Hays
//02-13-2021
//https://leetcode.com/problems/shortest-path-in-binary-matrix/
//SC: O(N) TC: O(N)

class Solution {
public:
    int dir[9] = {-1, -1, 0, 1, 1, 0, -1, 1, -1}; //8-directional coordinates broken into sequential pairs
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        if(!grid[0][0]){
            q.push(make_pair(0,0));    
            grid[0][0] = 1;
        } 
        
        int res = 0;
        while(!q.empty()){
            res++;
            int size = q.size();
            for(int i = 0; i < size; i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(x == n-1 && y == m-1) return res;
                for(int j = 1; j < 9; j++){
                    int dirX = x + dir[j-1];
                    int dirY = y + dir[j];
                    if(dirX >= 0 && dirX < n && dirY >= 0 && dirY < m && !grid[dirX][dirY]){
                        grid[dirX][dirY] = 1;
                        q.push(make_pair(dirX,dirY));
                    }   
                }
            }
        }
        return -1;
    }
};



    
