/***********************************************************************************************
Problem      Keys and Rooms
Developer    Ian Hays
Date         03/19/2021
URL          https://leetcode.com/problems/keys-and-rooms/
Space        O(N) 
Time         O(N)
Description  Dfs through rooms using recursion stack
************************************************************************************************/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        dfs(rooms,visited,0);
        for(auto v: visited) if(!v) return false;
        return true;
    }
    
    void dfs(vector<vector<int>>& rooms, vector<bool>& visited, int room){
        visited[room] = true;
        for(int i = 0; i < rooms[room].size(); i++){
            int next = rooms[room][i];
            if(!visited[next]){
                dfs(rooms,visited,next);
            }
        }
    }
};
