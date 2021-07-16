/***********************************************************************************************
Problem      Uncommon Words From Two Sentences
Developer    Ian Hays
Date         07/16/2021
URL          https://leetcode.com/problems/uncommon-words-from-two-sentences/
Space        O(N) 
Time         O(N)
Description  We keep track of the number of occurrences for each word. We return a result array
             of words with only one occurrence. 
************************************************************************************************/

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> counts;
        istringstream iss(s1 + " " + s2);
        while(iss >> s1) counts[s1]++;
        vector<string> res;
        for(auto count: counts)
            if(count.second == 1) res.push_back(count.first);
        return res;
    }
};
