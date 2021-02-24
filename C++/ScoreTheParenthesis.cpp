//Ian Hays
//02-24-2021
//https://leetcode.com/problems/score-of-parentheses/
//SC: O(1) TC: O(N)

class Solution {
public:    
    int scoreOfParentheses(string S) {
        stack<int> s;
        int res = 0;
        for(auto ch: S){
            if(ch == '('){
                s.push(res);
                res = 0;
            } else {
                res += s.top() + max(res,1);
                s.pop();
            }
        }
        return res;
    }
};
