/***********************************************************************************************
Problem      Range Addition II
Developer    Ian Hays
Date         08/31/2021
URL          https://leetcode.com/problems/minimum-number-of-flips-to-convert-binary-matrix-to-zero-matrix/
Space        O((M*N)^3) 
Time         O((M*N)^3)
Description  We dfs through each element flipping and not flipping. When we reach the end element
             we determine the amount of steps to reach a 0 matrix. We return the minimum steps. 
************************************************************************************************/

class Solution {
public:
    int m, n;
    
    int minFlips(vector<vector<int>>& mat) {
        m = size(mat), n = size(mat[0]);
        int res = dfs(mat,0,0);
        return res >= 100000 ? -1 : res;
    }
    
    bool isZeroMatrix(vector<vector<int>>& mat){
        for(auto row : mat)
            for(auto col: row)
                if(col == 1) return false;
        return true;
    }
    
    vector<vector<int>>& flipMatrix(vector<vector<int>>& mat, int x, int y){
        mat[x][y] ^= 1;
        if(x+1 < m) mat[x+1][y] ^= 1;
        if(x-1 >= 0) mat[x-1][y] ^= 1;
        if(y+1 < n) mat[x][y+1] ^= 1;
        if(y-1 >= 0) mat[x][y-1] ^= 1;
        return mat;
    }
    
    int dfs(vector<vector<int>> mat, int x, int y){
        if(y == n) x++, y = 0;
        if(x == m) return isZeroMatrix(mat) ? 0 : 100000;
        return min(dfs(mat,x,y+1),dfs(flipMatrix(mat,x,y), x, y+1) + 1);
    }
};
