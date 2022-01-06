/***********************************************************************************************
Problem      Group Anagrams
Developer    Ian Hays
Date         01/06/2021
URL          https://leetcode.com/problems/group-anagrams/
Space        O(N) 
Time         O(N)
Description  Sorted string is the hash value for the result strings in a map. Combine result strings
             and return.
************************************************************************************************/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> res;
        
        for(auto str: strs){
            string hash = str;
            sort(begin(hash), end(hash));
            umap[hash].push_back(str);
        }
        
        for(auto it = umap.begin(); it != umap.end(); it++){
            res.push_back(it->second);
        }
        return res;
    }
};
