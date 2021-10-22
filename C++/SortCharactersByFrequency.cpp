/***********************************************************************************************
Problem      Sort Characters By Frequency
Developer    Ian Hays
Date         10/21/2021
URL          https://leetcode.com/problems/sort-characters-by-frequency/
Space        O(N) 
Time         O(N*LOG(N))
Description  We store the third value in an integer, second value candidate in a stack. The first
             value is validated when it is less than the third after assigning it in our while loop.
************************************************************************************************/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        for(auto ch: s) umap[ch]++;
        sort(begin(s), end(s),[&](const char& c1,const char& c2){ 
            return umap[c1] == umap[c2] ? c1 < c2 : umap[c1] > umap[c2];
        });
        return s;
    }
};
