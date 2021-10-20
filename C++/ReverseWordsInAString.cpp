/***********************************************************************************************
Problem      Reverse Words in a String
Developer    Ian Hays
Date         10/19/2021
URL          https://leetcode.com/problems/reverse-words-in-a-string/
Space        O(N) 
Time         O(N)
Description  Move words from the string to a string stream to place into the stack. We pop out of
             the stack into a result string.
************************************************************************************************/

class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        stack<string> stack;
        while(iss){
            string word;
            iss >> word;
            if(word != "") stack.push(word);            
        }
        string res;
        while(!stack.empty()){
            res += stack.top() + " ";
            stack.pop();
        }
        res.pop_back();
        return res;
    }
};
