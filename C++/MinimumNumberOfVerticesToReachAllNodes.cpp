//Ian Hays
//12-11-20
//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> indegrees = vector<int>(n,0);
        vector<int> res;
        for(int i = 0; i < edges.size(); i++){
            indegrees[edges[i][1]]++;
        }
        
        for(int i = 0; i < indegrees.size(); i++){
            if(indegrees[i] == 0) res.push_back(i);
        }
        
        return res;
    }
};
