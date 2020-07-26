//Ian Hays
//07-25-2020
//https://leetcode.com/problems/alien-dictionary/
//SC: O(M*N) TC: O(M*N)

class Solution {
public:
    string alienOrder(vector<string>& words) {
        unordered_map<char,unordered_set<char>> graph;
        unordered_map<char,int> indegrees;
        unordered_set<char> alphabet;
        
        //initialize indegree
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                alphabet.insert(words[i].begin(),words[i].end());
                char ch = words[i][j];
                indegrees[ch] = 0;
            }
        }
        
        //build graph and indegrees - return "" when a when prev value has appended chars ex: abc comes before ab
        for(int i = 1; i < words.size(); i++){
            string prev = words[i-1];
            string curr = words[i];
            int m = min(prev.size(),curr.size());
            for(int j = 0; j < m; j++){
                if(prev[j] != curr[j]){
                    unordered_set<char> adj = graph[prev[j]];
                    if(adj.find(curr[j]) == adj.end()){
                        graph[prev[j]].insert(curr[j]);
                        indegrees[curr[j]]++;
                    }
                    break;
                }
                if(prev.size() == j + 2 && curr.size() == j + 1) return "";
            }
        }
        
        queue<char> q;
        //push character with 0 indegrees (start of alphabet)
        for(auto it: indegrees){
            if(it.second == 0) q.push(it.first);
        }
        string res;
        //topological sort
        while(!q.empty()){
            int m = q.size();
            for(int i = 0; i < m; i++){
                char ch = q.front();
                res += ch;
                q.pop();
                for(auto it: graph[ch]){
                    indegrees[it]--;
                    if(indegrees[it] == 0) q.push(it);
                }
            }
        }
        //if res size different than alphabet size, means there was a loop, so return ""
        return res.size() == alphabet.size() ? res : "";
    }
};

