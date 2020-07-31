//Ian Hays
//07-31-2020
//https://leetcode.com/problems/is-graph-bipartite/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> visited(graph.size(),0);
        bool res = true;
        for(int i = 0; i < graph.size(); i++){
            if(visited[i] == 0){
                res &= dfs(graph,visited,i,1);    
            } 
        }
        return res;
    }
    
    bool dfs(vector<vector<int>>& graph, vector<int>& visited, int node, int group){
        bool res = true;
        if(visited[node] == 0){
            visited[node] = group;
            for(int i = 0; i < graph[node].size(); i++){
                res &= dfs(graph, visited, graph[node][i], -group);
            }
        }
        return res && visited[node] == group;
    }
};
