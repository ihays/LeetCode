//Ian Hays
//02-15-2021
//https://leetcode.com/problems/ransom-note/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap;
        for(auto ch: magazine) umap[ch]++;
        for(auto ch: ransomNote){
            if(--umap[ch] < 0) return false;
        }
        return true;
    }
};
