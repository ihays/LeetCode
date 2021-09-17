/***********************************************************************************************
Problem      Reverse Prefix Of Word
Developer    Ian Hays
Date         09/16/2021
URL          https://leetcode.com/problems/reverse-prefix-of-word/
Space        O(1) 
Time         O(N)
Description  Reverse word at the begin index and index of first location ch is found inclusive.
************************************************************************************************/

class Solution {
public:
    string reversePrefix(string word, char ch) {
        reverse(begin(word), begin(word) + word.find(ch) + 1);
        return word;
    }
};
