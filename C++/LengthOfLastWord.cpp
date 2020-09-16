//Ian Hays
//09-16-2020
//https://leetcode.com/problems/length-of-last-word/
//SC: O(N) TC: O(N)

class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream is(s);
        string str;
        while(is >> str){};
        return str.length();
    }
};
