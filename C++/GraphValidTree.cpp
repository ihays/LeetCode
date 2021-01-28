//Ian Hays
//01-28-2021
//https://leetcode.com/problems/graph-valid-tree/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n, vector<int>());
        for(auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> visited(n, 0);    
        return !hasCycle(adj,visited,-1,0) && accumulate(visited.begin(),visited.end(),0) == n;
    }
    
    bool hasCycle(vector<vector<int>>& adj, vector<int>& visited, int parent, int child){
        if(visited[child]) return true;
        visited[child] = 1;
        for(auto a: adj[child]){
            if(a != parent && hasCycle(adj,visited,child,a)) return true;
        }
        return false;
    }
};
