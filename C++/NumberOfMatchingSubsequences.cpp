/***********************************************************************************************
Problem      Number of Matching Subsequences
Developer    Ian Hays
Date         06/22/2021
URL          https://leetcode.com/problems/number-of-matching-subsequences/
Space        O(N^2) 
Time         O(N^2)
Description  We evaluate each word to determine if it's a subsequence. Storing words into a map
             with a quantity helps reduce run time when dealing with duplicates. 
************************************************************************************************/

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int> umap;
        int res = 0;
        for(auto word: words) 
            umap[word]++;
        for(auto pair: umap)
            if (isSubsequence(s, pair.first))
                res += pair.second;
        return res;
        
    }
    bool isSubsequence(string a, string b) {
        int i = 0, j = 0;
        for(int i = 0; i < a.length() && j < b.length(); i++) 
            if(a[i] == b[j]) j++;
        return (j == b.length());
    }
};
