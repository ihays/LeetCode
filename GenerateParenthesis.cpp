//Ian Hays
//07-16-2020
//https://leetcode.com/problems/generate-parentheses/
//SC: O(1) TC: O(N+M)
//Recursively DFS through possible combinations of valid parenthesis and add them to the solution.

class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        helper("",n,0);
        return res;
    }
    
    void helper(string par, int n, int m){
        if(n == 0 && m == 0){
            res.push_back(par);
            return;
        }
        
        if(n > 0) helper(par+'(', n-1, m+1);
        if(m > 0) helper(par+')', n, m-1);
    }
};
