//Ian Hays
//12-11-20
//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/
//SC: O(N) TC: O(N)

public class Solution {
    public IList<int> FindSmallestSetOfVertices(int n, IList<IList<int>> edges) {
        int[] indegrees = new int[n];
        List<int> result = new List<int>();
        foreach(var edge in edges){
            indegrees[edge[1]]++;
        }
        
        for(int i = 0; i < indegrees.Length; i++){
            if(indegrees[i] == 0) result.Add(i);
        }
        
        return result;
    }
}
