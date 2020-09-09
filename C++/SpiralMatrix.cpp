//Ian Hays
//08-26-2020
//https://leetcode.com/problems/spiral-matrix/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    enum Direction {right, down, left, up};
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty()) return res;
        int m = matrix.size();
        int n = matrix[0].size();
        
        int t = 0;
        int b = m-1;
        int l = 0;
        int r = n-1;
        
        Direction dir = right;
        
        while(t <= b && l <= r){
            switch(dir){
                case right:
                    for(int i = l; i <= r; i++){
                        res.push_back(matrix[t][i]);
                    }
                    t++;
                    dir = down;
                    break;
                case down:
                    for(int i = t; i <= b; i++){
                        res.push_back(matrix[i][r]);
                    }
                    r--;
                    dir = left;
                    break;
                case left:
                    for(int i = r; i >= l; i--){
                        res.push_back(matrix[b][i]);
                    }
                    b--;
                    dir = up;
                    break;
                case up:
                    for(int i = b; i >= t; i--){
                        res.push_back(matrix[i][l]);
                    }
                    l++;
                    dir = right;
                    break;
            }
        }
        
        
        return res;
    }
};


