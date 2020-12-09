//Ian Hays
//12-09-20
//https://leetcode.com/problems/find-smallest-common-element-in-all-rows/
//SC: O(1) TC: O(N^2)

class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        vector<int> vect(10001);
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                if(++vect[mat[i][j]] == mat.size()) return mat[i][j];
                
            }
        }
        return -1;
    }
};
