/***********************************************************************************************
Problem      Word Subsets
Developer    Ian Hays
Date         03/26/2021
URL          https://leetcode.com/problems/word-subsets/
Space        O(M + N) 
Time         O(M + N)
Description  Build a map of maximum character counts of all strings in B. Compare to a map of character 
             counts for each string in A. a string in A is a result if it's counts are greater than the 
             map of maximum character counts of all strings in B.
************************************************************************************************/

class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int> bMap(26);
        for(auto str: B){
            vector<int> tmp = buildMap(str);
            for(int i = 0; i < 26; i++){
                bMap[i] = max(bMap[i], tmp[i]);
            }
        }  
        vector<string> res;
        for(auto str: A){
            vector<int> tmp = buildMap(str);
            int i;
            for(i = 0; i < 26; i++){
                if(tmp[i] < bMap[i]) break;
            }
            if(i == 26) res.push_back(str);
        }

        return res;
    }
    
    vector<int> buildMap(string word){
        vector<int> map(26);
        for(char ch: word){
            map[ch-'a']++;
        }
        return map;
    }
    
};
