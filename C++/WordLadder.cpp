/***********************************************************************************************
Problem      Word Ladder
Developer    Ian Hays
Date         02/11/2022
URL          https://leetcode.com/problems/word-ladder/
Space        O(N) 
Time         O(N)
Description  DFS through each word as a set until end word is found. 
************************************************************************************************/

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(begin(wordList), end(wordList));
        queue<string> q;
        q.push(beginWord);
        int res = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                string w = q.front();
                q.pop();
                if(w == endWord) return res+1;
                for(int i = 0; i < w.length(); i++){
                    char backtrack = w[i];
                    for(int ch = 'a'; ch <= 'z'; ch++){
                        w[i] = ch;
                        if(words.count(w)){
                            q.push(w);
                            words.erase(w);
                        }
                    }
                    w[i] = backtrack;
                }   
            }
            res++;
        }
        return 0;
    }
};
