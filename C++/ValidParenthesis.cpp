/***********************************************************************************************
Problem      Valid Parenthesis
Developer    Ian Hays
Date         01/06/2021
URL          https://leetcode.com/problems/valid-parentheses/
Space        O(N) 
Time         O(N)
Description  while iterating through string, push in opening parentheses and then pop when a pair
             is found. Return if the stack is empty. 
************************************************************************************************/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto ch: s){
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
                continue;
            }
            if(st.empty()) return false;
            if(st.top() == '(' && ch == ')' || st.top() == '[' && ch == ']' || st.top() == '{' && ch == '}'){
                st.pop();
            }else {
                return false;    
            }
        }
        return st.size() == 0;
    }
};
