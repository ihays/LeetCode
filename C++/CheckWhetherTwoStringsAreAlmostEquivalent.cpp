/***********************************************************************************************
Problem      Check Whether Two Strings are Almost Equivalent
Developer    Ian Hays
Date         11/18/2021
URL          https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/
Space        O(1) 
Time         O(N)
Description  Store the frequencies of each word and then compare them. Anything greater than 3 is
             false, else its true. 
************************************************************************************************/

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int freq1[26] = {}, freq2[26] = {};
        for(auto ch: word1) freq1[ch-'a']++;
        for(auto ch: word2) freq2[ch-'a']++;
        for(int i = 0; i < 26; i++){
            if(abs(freq1[i] - freq2[i]) > 3) return false;
        }
        return true;
    }
};
