//Ian Hays
//02-08-2021
//https://leetcode.com/problems/number-of-distinct-islands/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    int numDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> dir = {0,1,0,-1,0};
        unordered_set<string> st;
        queue<pair<int,int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;
                    q.push(make_pair(i,j));    
                    string tmp;
                    while(!q.empty()){
                        int size = q.size();
                        for(int k = 0; k < size; k++){
                            int x = q.front().first;
                            int y = q.front().second;
                            tmp += to_string(x-i) + to_string(y-j);
                            q.pop();
                            for(int l = 0; l < 4; l++){
                                int dirX = x + dir[l+1];
                                int dirY = y + dir[l];
                                if(dirX >= 0 && dirX < n && dirY >= 0 && dirY < m && grid[dirX][dirY]){
                                    grid[dirX][dirY] = 0;
                                    q.push(make_pair(dirX,dirY));  
                                } 
                            }
                        }
                    }
                    st.insert(tmp);
                }   
            }
        }
        return st.size();
    }
};
