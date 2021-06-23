/***********************************************************************************************
Problem      All Paths From Source Lead To Destination
Developer    Ian Hays
Date         06/23/2021
URL          https://leetcode.com/problems/all-paths-from-source-lead-to-destination/
Space        O(N^2) 
Time         O(N^2)
Description  We use cycle detection using a recursion stack while verifying the final node is 
             equivalent to the destination. 
************************************************************************************************/

class Solution {
public:
    bool leadsToDestination(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj_list(n, vector<int>());
        vector<bool> rec_stack(n, false);
        for(auto edge: edges)
            adj_list[edge[0]].emplace_back(edge[1]);
        return dfs(rec_stack, adj_list, source, destination);

    }
    bool dfs(vector<bool>& rec_stack, vector<vector<int>>& adj_list, int source, int destination){
        if(size(adj_list[source]) == 0) return source == destination;
        if(rec_stack[source]) return false;
        rec_stack[source] = true;
        for(auto node: adj_list[source])
            if(!dfs(rec_stack, adj_list, node, destination)) return false;
        rec_stack[source] = true;
        return true;
    }
};
