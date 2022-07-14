/***********************************************************************************************
Problem      Reverse Words In A String III
Developer    Ian Hays
Date         07/14/2022
URL          https://leetcode.com/problems/reverse-words-in-a-string-iii/
Space        O(N) 
Time         O(N)
Description  using a string stream, push words to a word string and reverse to build the result.
************************************************************************************************/

class Solution {
public:
    string reverseWords(string s) {
        string res;
        istringstream iss(s);
        string word;
        while(iss >> word){
            reverse(begin(word),end(word));
            res += word + " ";
        }
        return res.substr(0, size(res)-1);
    }
};
