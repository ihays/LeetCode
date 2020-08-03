//Ian Hays
//08-03-2020
//https://leetcode.com/problems/accounts-merge/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,string> names;
        unordered_map<string,string> parents;
        unordered_map<string,set<string>> unions;
        vector<vector<string>> res;
        
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 1; j < accounts[i].size(); j++){
                names[accounts[i][j]] = accounts[i][0];
                parents[accounts[i][j]] = accounts[i][j];
            }
        }
        
        for(int i = 0; i < accounts.size(); i++){
            string s = find(accounts[i][1],parents);
            for(int j = 2; j < accounts[i].size(); j++){
                parents[find(accounts[i][j], parents)] = s;
            }
        }
        
        for(auto it: parents){
            unions[find(it.second,parents)].insert(it.first);
        }
    
        for(auto it: unions){
            vector<string> tmp(it.second.begin(),it.second.end());
            tmp.insert(tmp.begin(),names[it.first]);
            res.push_back(tmp);
        }
        
        return res;
    }
    
    string find(string& s, unordered_map<string,string>& p){
        return p[s] == s ? s : find(p[s], p);
    }
};
