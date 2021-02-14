//Ian Hays
//02-14-2021
//https://leetcode.com/problems/is-graph-bipartite/
//SC: O(V*E) TC: O(V*E)

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<array<int,2>> q;
        vector<int> visited(graph.size(),0);
        for(int i = 0; i < visited.size(); i++){
            if(visited[i]) continue;
            q.push({i,1});
            while(!q.empty()){
                int size = q.size();
                for(int j = 0; j < size; j++){
                    auto [node,set] = q.front();
                    q.pop();
                    set *= -1;
                    for(int k = 0; k < graph[node].size(); k++){
                        int neighbor = graph[node][k];
                        if(!visited[neighbor]){
                            visited[neighbor] = set; 
                            q.push({neighbor,set});
                        } else {
                            if(visited[neighbor] != set) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
