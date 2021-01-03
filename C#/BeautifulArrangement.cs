//Ian Hays
//01-03-21
//https://leetcode.com/problems/beautiful-arrangement/
//SC: O(N) TC: O(N!)

public class Solution {
    public int CountArrangement(int n) {
        return dfs(new bool[n+1],1);
    }
    
    public int dfs(bool[] visited, int index){
        if(visited.Length == index) return 1;
        
        int count = 0;
    
        for(int i = 1; i < visited.Length; i++){
            if(!visited[i] && (i%index == 0 || index%i == 0)){
                visited[i] = true;
                count += dfs(visited,index+1);
                visited[i] = false;
            }
        }
        return count;
    }
}
