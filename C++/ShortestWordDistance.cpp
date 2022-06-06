/***********************************************************************************************
Problem      Shortest Word Distance
Developer    Ian Hays
Date         05/17/2021
URL          https://leetcode.com/problems/shortest-word-distance/
Space        O(1) 
Time         O(N)
Description  Store locations of words and grab the minimum distance between them as you iterate 
             through the input vector. 
************************************************************************************************/

class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int i1 = -1, i2 = -1, res = INT_MAX;
        for(int i = 0; i < size(wordsDict); i++){
            if(wordsDict[i] == word1) i1 = i;    
            if(wordsDict[i] == word2) i2 = i;
            if(i1 != -1 && i2 != -1) res = min(res, abs(i2-i1));
        }
        return res;
    }
};
