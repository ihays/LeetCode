/***********************************************************************************************
Problem      Count Common Words With One Occurrence
Developer    Ian Hays
Date         12/1/2021
URL          https://leetcode.com/problems/count-common-words-with-one-occurrence/
Space        O(N) 
Time         O(N)
Description  Record the frequency of values in words1, and subract frequency of words 2 only if 
             there exist 1 value in words 1. Return the number frequencies where the difference is
             0.
************************************************************************************************/

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> umap;
        for(auto w: words1) umap[w]++;
        for(auto w: words2){
            if(umap[w] <= 1) 
                umap[w]--;            
        } 
        
        return count_if(umap.begin(), umap.end(), [](const auto &p){
            return p.second == 0;
        });
    }
};
