//Ian Hays
//02-11-2021
//https://leetcode.com/problems/valid-anagram/
//SC: O(1) TC: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int chars[26] = {0};
        for(auto ch : s) ++chars[ch-'a'];
        for(auto ch : t) if(--chars[ch-'a'] < 0) return false;
        return s.length() == t.length();
    }
};
