/***********************************************************************************************
Problem      Count Items Matching a Rule
Developer    Ian Hays
Date         03/14/2021
URL          https://leetcode.com/problems/count-items-matching-a-rule/
Space        O(1) 
Time         O(N)
Description  Counts the number of matches using a hash map to store index of the rule key           
************************************************************************************************/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string,int> umap {
            {"type", 0},
            {"color", 1},
            {"name", 2},
        };
        
        int res = 0;
        
        for(int i = 0; i < items.size(); i++){
            if(items[i][umap[ruleKey]] == ruleValue) res++;
        }
        
        return res;
    }
};
