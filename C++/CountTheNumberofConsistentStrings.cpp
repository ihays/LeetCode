/***********************************************************************************************
Problem      Count the Number of Consistent Strings
Developer    Ian Hays
Date         10/16/2021
URL          https://leetcode.com/problems/count-the-number-of-consistent-strings/
Space        O(1) 
Time         O(N)
Description  We keep a dictionary of allowed characters to check upon words. We return a vector
             of all consistent strings.
************************************************************************************************/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool alph[26] = {false};
        for(char ch: allowed){
            alph[ch-'a'] = true;
        }
        int res = 0;
        for(string word: words){
            bool isAllowed = true;
            for(char ch: word){
                if(alph[ch-'a'] == false){
                    isAllowed = false;
                    break;
                }
            }
            if(isAllowed) res++;
        }
        return res;
    }
};
