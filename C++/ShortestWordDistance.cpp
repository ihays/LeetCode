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
        int location1 = INT_MAX;
        int location2 = INT_MAX;
        int res = INT_MAX;
        for(int i = 0; i < wordsDict.size(); i++){
            string word = wordsDict[i];
            if(word == word1){
                location1 = i;
            } else if(word == word2){
                location2 = i;
            } else {
                continue;
            }
            if(location1 != INT_MAX && location2 != INT_MAX) res = min(res,abs(location2 - location1));
        }
        return res;
    }
};
