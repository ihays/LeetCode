//Ian Hays
//01-05-2021
//https://leetcode.com/problems/pascals-triangle-ii/
//SC: O(K) TC: O(N^2)

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1,1);
        for(int i = 2; i < rowIndex+1; i++){
            int prev = res[0];
            for(int j = 1; j < i; j++){
                int curr = res[j];
                res[j] = prev + curr;
                prev = curr;  
            }
        }
        return res;
    }
};
