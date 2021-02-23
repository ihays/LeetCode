//Ian Hays
//02-23-2021
//https://leetcode.com/problems/search-a-2d-matrix-ii/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x = 0;
        int y = matrix[0].size()-1;
        
        while(x < matrix.size() && y >= 0){
            if(matrix[x][y] == target) return true;
            while(x < matrix.size() && y >= 0 && target > matrix[x][y]) x++;
            while(x < matrix.size() && y >= 0 && target < matrix[x][y]) y--;
        }
        return false;
    }
};


