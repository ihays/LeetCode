/***********************************************************************************************
Problem      Generate Parentheses
Developer    Ian Hays
Date         06/16/2021
URL          https://leetcode.com/problems/generate-parentheses/
Space        O(N) 
Time         O(N)
Description  We dfs through correct possibilities of parentheses combinations. Push string into
             the result vector when the size is equal to the number of pairs.  
************************************************************************************************/

class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        solve(n, 0, 0, "");
        return res;
    }
    
    void solve(int n, int open, int close, string parenthesis){
        if(2*n == open + close) res.push_back(move(parenthesis));
        if(open < n) solve(n, open + 1, close, parenthesis + '(');
        if(close < open) solve(n, open, close + 1, parenthesis + ')');
    }
};
