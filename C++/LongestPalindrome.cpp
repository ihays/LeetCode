/***********************************************************************************************
Problem      Longest Palindrome
Developer    Ian Hays
Date         07/13/2022
URL          https://leetcode.com/problems/longest-palindrome/
Space        O(N) 
Time         O(N)
Description  Track the number of odd values. If there are, the size of the palindrome is the number
             of odds plus one subtracted from the size, otherwise it's just the size of the input string
************************************************************************************************/

class Solution {
public:
    int longestPalindrome(string s) {
        int odds = 0;
        unordered_map<char,int> umap;
        
        for(auto ch: s){
            umap[ch]++;
        }
        
        for(auto it = umap.begin(); it != umap.end(); it++){
            odds += it->second % 2 ? 1 : 0;
        }
        return odds ? size(s) - odds + 1 : size(s);
    }
};
