/***********************************************************************************************
Problem      Single-Row Keyboard
Developer    Ian Hays
Date         03/2/2021
URL          https://leetcode.com/problems/single-row-keyboard/
Space        O(1) 
Time         O(N)
Description  Assign index values of keyboard to alph. Using alph, iterate through word and sum the
             distance between keys. 
************************************************************************************************/

class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int alph[26] = {0};
        for(int i = 0; i < keyboard.size(); i++){
            alph[keyboard[i]-'a'] = i;
        }
        int res = alph[word[0]-'a'];
        for(int i = 1; i < word.size(); i++){
            res += abs(alph[word[i-1]-'a'] - alph[word[i]-'a']);
        }
        return res;
    }
};
