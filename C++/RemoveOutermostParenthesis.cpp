/***********************************************************************************************
Problem      Remove Outermost Parenthesis
Developer    Ian Hays
Date         10/19/2021
URL          https://leetcode.com/problems/remove-outermost-parentheses/
Space        O(N) 
Time         O(N)
Description  Build new parenthesis string by ignoring the outermost parenthesis. We do this by 
             calculating the level of parenthesis with paren and we only push to the result if
             the level is not 0.
************************************************************************************************/


class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int paren = 0;
        for(auto ch: s){
            if(ch == ')') paren--;
            if(paren != 0) res.push_back(ch);
            if(ch == '(') paren++;
        }
        return res;
        
    }
};
