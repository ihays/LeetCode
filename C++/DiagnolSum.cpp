/***********************************************************************************************
Problem      Diagnol Sum
Developer    Ian Hays
Date         03/07/2021
URL          https://leetcode.com/problems/matrix-diagonal-sum/
Space        O(1)
Time         O(N)
Description  Sum both diagnols by keeping track of an incremental index.
************************************************************************************************/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size()-1;
        int index = 0; 
        int res = 0;
        for(int i = 0; i < mat.size(); i++){
            res += (i != m - index) ? mat[i][index] + mat[i][m - index] : mat[i][index];
            index++;
        }
        return res;
    }
};
