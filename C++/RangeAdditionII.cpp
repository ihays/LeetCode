/***********************************************************************************************
Problem      Range Addition II
Developer    Ian Hays
Date         08/30/2021
URL          https://leetcode.com/problems/range-addition-ii/
Space        O(1) 
Time         O(N)
Description  Since all ranges include 0 to the ops value, we want to return the product of the 
             minimum x and minimum y.
************************************************************************************************/

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int x = m, y = n;
        for(int i = 0; i < ops.size(); i++){
            x = min(x,ops[i][0]);
            y = min(y,ops[i][1]);
        }
        return x * y;
    }
};
