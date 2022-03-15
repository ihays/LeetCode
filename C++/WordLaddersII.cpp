/***********************************************************************************************
Problem      Word Ladder II
Developer    Ian Hays
Date         03/14/2022
URL          https://leetcode.com/problems/word-ladder-ii/
Space        O(N) 
Time         O(N)
Description  BFS through words until ladder is made and return the sequence.
************************************************************************************************/

class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(begin(wordList), end(wordList));
        vector<string> visited;
        queue<vector<string>> q;
        q.push({beginWord});
        vector<vector<string>> result;
        
        while(!q.empty()){
            int size = q.size();
            bool flag = false;
            while(size--){
                vector<string> transformation = q.front();
                string word = transformation.back();
                for(int i = 0; i < word.length(); i++){
                    for(int j = 0; j < 26; j++){
                        string w = word;
                        w[i] = 'a' + j;
                        vector<string> tmp = transformation;
                        if(w == endWord && words.count(w)){
                            tmp.push_back(w);
                            result.push_back(tmp);
                            flag = true;
                        } else if(words.count(w)){
                            tmp.push_back(w);
                            visited.push_back(w);
                            q.push(tmp);
                        }
                    }
                }
                q.pop();
            }
            if(flag) break;
            for(auto v: visited) words.erase(v);
        }
        return result; 
    }
};
