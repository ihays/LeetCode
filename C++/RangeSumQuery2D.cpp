/***********************************************************************************************
Problem      Range Sum Query 2D
Developer    Ian Hays
Date         05/12/2021
URL          https://leetcode.com/problems/range-sum-query-2d-immutable/
Space        O(1) 
Time         O(N^2)
Description  Stores sums of square starting from 0,0 in vector. We use addition/removals to create
             the necessary sum region with the sums vector. 
************************************************************************************************/

class NumMatrix {
public:
    vector<vector<int>> sums;
    
    NumMatrix(vector<vector<int>>& matrix) {
        sums = vector<vector<int>> (matrix.size()+1, vector<int>(matrix[0].size()+1, 0));
        for(int i = 1; i < sums.size(); i++){
            for(int j = 1; j < sums[0].size(); j++){
                sums[i][j] = matrix[i-1][j-1] - sums[i-1][j-1] + sums[i-1][j] + sums[i][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return sums[row1][col1] - sums[row1][col2+1] - sums[row2+1][col1] + sums[row2+1][col2+1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
