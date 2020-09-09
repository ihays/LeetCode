//Ian Hays
//07-05-2020
//https://leetcode.com/problems/pascals-triangle/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(!numRows) return res;
        res.push_back(vector<int>{1});
        int row = 1;
        while(numRows!=row){
            res.push_back(vector<int>({1,1}));
            for(int i = 1; i < res[row-1].size(); i++){
                res[row].insert(res[row].begin()+i, res[row-1][i-1] + res[row-1][i]);
            }
            row++;
        }
        
        return res;
        
    }
};
