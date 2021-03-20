/***********************************************************************************************
Problem      Course Schedule
Developer    Ian Hays
Date         03/20/2021
URL          https://leetcode.com/problems/course-schedule/
Space        O(N^2) 
Time         O(N)
Description  Dfs using a recursion stack to determine if there is a loop in the graph           
************************************************************************************************/

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjList(numCourses, vector<int>());
        
        for(int i = 0; i < prerequisites.size(); i++){
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
    
        vector<bool> recStack(numCourses, false);
        vector<bool> visited(numCourses, false);
        
        for(int i = 0; i < numCourses; i++){
            if(!visited[i] && isCycle(adjList,i,recStack,visited)) return false;
        }
        
        return true;
    }
    bool isCycle(vector<vector<int>>& adjList, int node, vector<bool>& recStack, vector<bool>& visited){
        if(recStack[node]) return true;
        if(visited[node]) return false;
        
        recStack[node] = true;
        visited[node] = true;
        
        for(int i = 0; i < adjList[node].size(); i++){
            int next = adjList[node][i];
            if (isCycle(adjList, next, recStack, visited)) return true;
        }
        
        recStack[node] = false;
        return false;
    }
};

