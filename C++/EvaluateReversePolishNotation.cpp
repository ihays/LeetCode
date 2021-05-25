/***********************************************************************************************
Problem      Evaluate Reverse Polish Notation
Developer    Ian Hays
Date         05/25/2021
URL          https://leetcode.com/problems/evaluate-reverse-polish-notation/
Space        O(N) 
Time         O(N)
Description  Iterate through tokens pushing when it's a number, evaluating and pushing the result
             when it's an operation. Return the last item in the stack for the result. 
************************************************************************************************/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s; 
        for(int i = 0; i < tokens.size(); i++){
            string str = tokens[i];
            if (str == "+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a+b);    
            } else if (str == "-"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b-a);
            } else if (str == "/"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b/a);
            } else if (str == "*"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a*b); 
            } else {
                s.push(stoi(str));
            }
        }
        return s.top();
    }
};
