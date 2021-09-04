/***********************************************************************************************
Problem      Sum of Distances in Tree
Developer    Ian Hays
Date         09/04/2021
URL          https://leetcode.com/problems/sum-of-distances-in-tree/
Space        O(N) 
Time         O(N)
Description  We dfs through tree to grab the counts of subtrees for each node and generate a result
             vector for only the 0 node. We dfs a second time, but rerooting the tree to generate
             results for the rest of the tree to return.
************************************************************************************************/

class Solution {
public:
    vector<vector<int>> adjList;
    vector<int> count, res;
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        adjList.resize(n), count.resize(n), res.resize(n);
        for(auto edge: edges){
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        dfs(0);
        dfs2(0,n);
        return res;
    }
    
    void dfs(int node, int parent = -1){
        for(auto neighbor: adjList[node]){
            if(neighbor == parent) continue;
            dfs(neighbor, node);
            count[node] += count[neighbor];
            res[node] += res[neighbor] + count[neighbor];
        }
        count[node]++;
    }
    
    void dfs2(int node, int n, int parent = -1){
        for(auto neighbor: adjList[node]){
            if(neighbor == parent) continue;
            res[neighbor] = res[node] - count[neighbor] + n - count[neighbor];
            dfs2(neighbor, n, node);
        }
    }
};
