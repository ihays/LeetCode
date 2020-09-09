//Ian Hays
//07-11-2020
//https://leetcode.com/problems/single-row-keyboard/
//SC: O(1) TC: O(N)

class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int res = 0;
        unordered_map<char,int> umap;
        for(int i = 0; i < keyboard.length(); i++){
            umap[keyboard[i]] = i;
        }
        int curr = 0;
        for(int i = 0; i < word.length(); i++){
            res += abs(umap[word[i]] - curr);
            curr = umap[word[i]];
        }
        return res;
    }
};
