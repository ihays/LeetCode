//Ian Hays
//02-15-2021
//https://leetcode.com/problems/ransom-note/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int chars[26] = {0};
        for(auto ch: magazine) chars[ch-'a']++;
        for(auto ch: ransomNote){
            if(--chars[ch-'a'] < 0) return false;
        }
        return true;
    }
};
