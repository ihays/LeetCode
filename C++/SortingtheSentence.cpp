/***********************************************************************************************
Problem      Sorting The Sentence
Developer    Ian Hays
Date         11/15/2021
URL          https://leetcode.com/problems/sorting-the-sentence/
Space        O(N) 
Time         O(N*LOG(N))
Description  Store string into stream to place into a vector that can be sorted based on the last
             character. Place sorted vector into string removing last character and return.
************************************************************************************************/

class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        istringstream iss(s);
        string word, res;
        while(iss >> word) words.push_back(word);    
        sort(begin(words), end(words), [](const string s1, const string s2){
            return s1.back() < s2.back();
        });
        for(auto &w: words) w.erase(w.end()-1);    
        for(auto w: words) res += w + " ";
        res.erase(res.end()-1);
        return res;
    }
};
