//Ian Hays
//01-23-2021
//https://leetcode.com/problems/sort-the-matrix-diagonally/
//SC: O(N) TC: O(NLOG(N))

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int x = mat.size(), y = 0;
        while(x) mergeSort(x--,y,mat);
        while(y < mat[0].size()) mergeSort(x,y++,mat);
        return mat;
    }
    
    void mergeSort(int x, int y, vector<vector<int>>& mat){
        int i = x, j = y;
        vector<int> tmp;
        while(i < mat.size() && j < mat[0].size()) tmp.push_back(mat[i++][j++]);
        sort(tmp.begin(), tmp.end());
        i = x; j = y;
        for(auto it = tmp.begin(); it != tmp.end(); it++) mat[i++][j++] = *it;
    }
};
