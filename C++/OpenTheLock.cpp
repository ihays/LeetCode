/***********************************************************************************************
Problem      Open The Lock
Developer    Ian Hays
Date         06/04/2021
URL          https://leetcode.com/problems/open-the-lock/
Space        O(A^N)
Time         O(N * A^N + D) | A = number of digits = 10, N = number of dials = 4, D = number of directions = 4
Description  All deadends are placed into a visited set that we check when we BFS to a next possible 
             combination (from 0000 ~ maximum 8, e.g 0001, 0009, 0010, 0090, ...). If we encounter
             the target lock combination, we return the amount of turns, if not return -1.
************************************************************************************************/

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set visited(deadends.begin(), deadends.end());
        if(visited.count("0000")) return -1;
        queue<string> q;
        q.push("0000");
        for(int turns = 0; !q.empty(); turns++){
            int m = q.size();
            for(int i = 0; i < m; i++){
                string lock = q.front();
                q.pop();
                if(lock == target) return turns;
                for(int digit = 0; digit < 4; digit++){
                    for(int dir = -1; dir <= 1; dir += 2){
                        string neighbor = lock;
                        neighbor[digit] = (neighbor[digit] - '0' + dir + 10) % 10 + '0';
                        if(!visited.count(neighbor)){
                            visited.insert(neighbor);
                            q.push(neighbor);
                        }
                    }    
                }
            }
        }
        return -1;
    }
};
    
