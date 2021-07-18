/***********************************************************************************************
Problem      Maximum Number of Words You Can Type
Developer    Ian Hays
Date         07/18/2021
URL          https://leetcode.com/problems/maximum-number-of-words-you-can-type/
Space        O(1) 
Time         O(N)
Description  Store broken letters into a map for O(1) access. Iterate through each word checking
             each for a broken letter. If there are no broken letters, we increment our result.
************************************************************************************************/

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int map[26]{}, res{};
        istringstream iss(text);
        for(auto ch: brokenLetters) map[ch-'a']++;
        while(iss >> text) if(!isBroken(text, map)) res++;
        return res;
    }
    
    bool isBroken(string word, int map[26]){
        for(auto ch: word) if(map[ch-'a']) return true;
        return false;
    }
};
