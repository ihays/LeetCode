//Ian Hays
//01-01-2020
//https://leetcode.com/problems/palindrome-permutation/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char,int> umap;
        for(auto ch : s){
            umap[ch]++;
        }
        int count = 0;
        for(auto it = umap.begin(); it != umap.end(); it++){
            if(it->second%2) count++;
            if(count > 1) return false;
        }
        return true;
    }
};
