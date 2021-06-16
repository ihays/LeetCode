/***********************************************************************************************
Problem      Matchsticks to Square
Developer    Ian Hays
Date         06/15/2021
URL          https://leetcode.com/problems/matchsticks-to-square/
Space        O(N) 
Time         O(N^2)
Description  DFS through sum possibilities until there exists a value equal to 1/4 of the sum of
             all matchstick lengths. After 4 sides have been found, we return true, otherwise we
             return false.
************************************************************************************************/

class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int total = accumulate(begin(matchsticks),end(matchsticks),0);
        if(total % 4) return false;
        vector<bool> visited(matchsticks.size(), false);
        return dfs(matchsticks, visited, 0, 0, 0, total/4);
    }
    
    bool dfs(vector<int>& matchsticks, vector<bool>& visited, int sides, int index, int curr_sum, int max_sum){
        if(sides == 4) return true;
        if(curr_sum == max_sum) return dfs(matchsticks,visited,sides+1,0,0,max_sum);
        for(int i = index; i < matchsticks.size(); i++){
            if(!visited[i] && curr_sum + matchsticks[i] <= max_sum){
                visited[i] = true;
                if(dfs(matchsticks,visited,sides,i,curr_sum + matchsticks[i],max_sum)) return true;                
                visited[i] = false;
            }
        }
        return false;
    }
};
