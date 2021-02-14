//Ian Hays
//02-14-2021
//https://leetcode.com/problems/is-graph-bipartite/
//SC: O(V*E) TC: O(V*E)

public class Solution {
    public bool IsBipartite(int[][] graph) {
        Queue<int[]> queue = new Queue<int[]>();
        int[] visited = new int[graph.Length];
        for(int i = 0; i < visited.Length; i++){
            if(visited[i] != 0) continue;
            queue.Enqueue(new int[2]{i,1});
            while(queue.Count != 0){
                int size = queue.Count;
                for(int j = 0; j < size; j++){
                    int node = queue.Peek()[0];
                    int set = queue.Peek()[1]*-1;
                    queue.Dequeue();
                    for(int k = 0; k < graph[node].Length; k++){
                        int neighbor = graph[node][k];
                        if(visited[neighbor] == 0){
                            visited[neighbor] = set; 
                            queue.Enqueue(new int[2]{neighbor,set});
                        } else {
                            if(visited[neighbor] != set) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
}
