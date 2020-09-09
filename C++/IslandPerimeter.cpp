//Ian Hays
//07-07-2020
//https://leetcode.com/problems/island-perimeter/
//SC: O(1) TC: O(N^2)

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    count += (i-1 >= 0 && grid[i-1][j] == 0) || (i-1 < 0) ? 1 : 0;
                    count += (j-1 >= 0 && grid[i][j-1] == 0) || (j-1 < 0) ? 1 : 0;
                    count += (j+1 < grid[i].size() && grid[i][j+1] == 0) || (j+1 >= grid[i].size()) ? 1 : 0;
                    count += (i+1 < grid.size() && grid[i+1][j] == 0) || (i+1 >= grid.size()) ? 1 : 0;
                }
            }
        }
        return count;
    }
};
