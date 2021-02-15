//Ian Hays
//02-15-2021
//https://leetcode.com/problems/kill-process/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        unordered_map<int,set<int>> umap;
        for(int i = 0; i < pid.size(); i++){
            umap[ppid[i]].insert(pid[i]);
        }
        vector<int> res;
        dfs(res, umap, kill);
        return res;
    }
    
    void dfs(vector<int>& res, unordered_map<int,set<int>>& umap, int kill){
        res.push_back(kill);
        for(int children : umap[kill]){
            dfs(res, umap, children);     
        }
    }
};
