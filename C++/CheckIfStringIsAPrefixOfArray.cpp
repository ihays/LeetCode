/***********************************************************************************************
Problem      Check If String Is a Prefix of Array
Developer    Ian Hays
Date         11/17/2021
URL          https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/
Space        O(N) 
Time         O(N)
Description  Build prefix string until we reach the end of the words or the string is equal to or
             larger than s. return equivalence.
************************************************************************************************/

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string res;
        for(auto &word: words){
            if(size(res) >= size(s)) break;
            res += word;
        }
        return res == s;
    }
};


