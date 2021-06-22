/***********************************************************************************************
Problem      Pascals Triangle
Developer    Ian Hays
Date         06/21/2021
URL          https://leetcode.com/problems/pascals-triangle/
Space        O(N^2) 
Time         O(N^2)
Description  Build using pascal formula storing in a result vector. 
************************************************************************************************/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(1, vector<int>(1,1));
        while(--numRows){
            vector<int> curr(1,1);
            for(int j = 1; j < size(res.back()); j++)
                curr.emplace_back(res.back()[j-1] + res.back()[j]);
            curr.emplace_back(1);
            res.emplace_back(move(curr));
        }
        return res;
    }
};
