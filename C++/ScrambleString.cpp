/***********************************************************************************************
Problem      Scramble String
Developer    Ian Hays
Date         03/01/2022
URL          https://leetcode.com/problems/scramble-string/
Space        O(N^2) 
Time         O(N^2)
Description  Useing memoization to store previous results of scramble strings. Break apart the 
             the string and swap in random places at random times using recursion to determine if
             they can be scrambled from each other. An extra check for each call to verify that 
             the strings are atleast anagrams of each other.
************************************************************************************************/

class Solution {
public:
    unordered_map<string, bool> memo;
    bool isScramble(string s1, string s2) {
        if(s1 == s2) return true;
        
        string key = s1 + " " + s2;
        if(memo.count(key)) return memo[key];
        
        int n = size(s1);
        int alph[26] = {};
        for(int i = 0; i < n; i++){
            alph[s1[i]-'a']++;
            alph[s2[i]-'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(alph[i] != 0) return memo[key] = false;
        }
      
        bool canScramble = false;
        for(int i = 1; i < size(s1); i++){
            if((isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i, n-i), s2.substr(i, n-i))) || (isScramble(s1.substr(0, i), s2.substr(n-i, i)) && isScramble(s1.substr(i, n-i), s2.substr(0, n-i)))){
                canScramble = true;
                break;
            }
        }
        
        return memo[key] = canScramble;
    }
};
