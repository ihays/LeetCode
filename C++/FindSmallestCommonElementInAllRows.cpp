/***********************************************************************************************
Problem      Find Smallest Common Element in All Rows
Developer    Ian Hays
Date         03/23/2021
URL          https://leetcode.com/problems/find-smallest-common-element-in-all-rows/
Space        O(1) 
Time         O(N^2)
Description  Increment value in map. Return first value to reach the size of all rows.            
************************************************************************************************/

class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        int map[10000] = {0};
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(++map[mat[i][j]] == n) return mat[i][j];
            }
        }
        return -1;
    }
};
