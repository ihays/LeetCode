//Ian Hays
//12-28-2020
//https://leetcode.com/problems/spiral-matrix-ii/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n,0));
        int i = 0;
        int j = 0;
        int count = 1;
        int top = 0;
        int right = n-1;
        int bottom = n-1;
        int left = 0;

        
        while(left <= right && top <= bottom){
            for(j = left; j <= right; j++){
                res[i][j] = count;
                count++;
            }
            j--;
            top++;
        
            for(i = top; i <= bottom; i++){
                res[i][j] = count;
                count++;
            }
            i--;
            right--;

            for(j = right; j >= left; j--){
                res[i][j] = count;
                count++;
            }
            j++;
            bottom--;

            for(i = bottom; i >= top; i--){
                res[i][j] = count;
                count++;
            }
            i++;
            left++;
        }
        return res;
    }
};
