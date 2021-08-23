/***********************************************************************************************
Problem      PRemove Vowels from a String
Developer    Ian Hays
Date         08/23/2021
URL          https://leetcode.com/problems/remove-vowels-from-a-string/
Space        O(N) 
Time         O(N)
Description  Build new string without vowels using a vowel set to filter. 
************************************************************************************************/

class Solution {
public:
    string removeVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        string res;
        for(auto ch: s) if(!vowels.count(ch)) res.push_back(ch);
        return res;
    }
};
