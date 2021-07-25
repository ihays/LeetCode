/***********************************************************************************************
Problem      Make The String Great
Developer    Ian Hays
Date         07/24/2021
URL          https://leetcode.com/problems/make-the-string-great/
Space        O(N) 
Time         O(N)
Description  Iterate through each char pushing into the end of the string. We pop only if the char
             is a lowercase or capitalized version from the char in the back.
************************************************************************************************/

class Solution {
public:
    string makeGood(string s) {
        string res;
        for(auto ch: s){
            if(abs(res.back() - ch) == 32) res.pop_back();
            else res.push_back(ch);
        }
        return res;
    }
};
