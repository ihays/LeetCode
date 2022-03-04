/***********************************************************************************************
Problem      Word Break II
Developer    Ian Hays
Date         03/03/2022
URL          https://leetcode.com/problems/word-break-ii/
Space        O(N^2) 
Time         O(N^2)
Description  Use dynamic programing to hold possibilities of sentences through recursion. 
************************************************************************************************/

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(begin(wordDict), end(wordDict));
        unordered_map<int,vector<string>> memo {{s.size(), {""}}};
        
        function<vector<string>(int)> sentences = [&](int i){
            if(!memo.count(i))
                for(int j = i+1; j <= s.size(); j++)
                    if(dict.count(s.substr(i, j-i)))
                        for(string str: sentences(j))
                            memo[i].push_back(s.substr(i, j-i) + (str == "" ? "" : ' ' + str));
            return memo[i];
        };
        return sentences(0);
    }
};
