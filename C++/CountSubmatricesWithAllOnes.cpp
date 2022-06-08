/***********************************************************************************************
Problem      Count Submatrices With All Ones
Developer    Ian Hays
Date         06/08/2022
URL          https://leetcode.com/problems/count-submatrices-with-all-ones/
Space        O(1) 
Time         O(MN)
Description  For each cell, count the number of submatrices with all ones by incrementing based
             on 1's existing with bounds. 
************************************************************************************************/

class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int res = 0;
        for(int i = 0; i < size(mat); i++){
            for(int j = 0; j < size(mat[i]); j++){
                if(mat[i][j] == 1) res += countSubmat(i,j,mat);
            }
        }
        return res;        
    }
    
    int countSubmat(int i, int j, vector<vector<int>>& mat){
        int count = 0, x = i, y = j, m = size(mat), n = size(mat[x]);
        
        while(x < m){
            if(mat[x][y] == 0) break;
            while(y < n && mat[x][y] == 1){
                y++;
                count++;
            }    
            n = y;
            y = j;
            x++;
        }
        return count;
    }
};
