//Ian Hays
//02-13-2021
//https://leetcode.com/problems/shortest-path-in-binary-matrix/
//SC: O(N) TC: O(N)

public class Solution {
    public int[] dir = new int[9]{-1, 1, 0, 1, 1, 0, -1, 1, -1};
    
    public int ShortestPathBinaryMatrix(int[][] grid) {
        int n = grid.Length;
        int m = grid[0].Length;
        Queue<int[]> queue = new Queue<int[]>();
        if(grid[0][0] == 0){
            queue.Enqueue(new int[]{0,0});    
            grid[0][0] = 1;
        } 
        int result = 0;
        while(queue.Count != 0){
            result++;
            int size = queue.Count;
            for(int i = 0; i < size; i++){
                int x = queue.Peek()[0];
                int y = queue.Peek()[1];
                queue.Dequeue();
                if(x == n-1 && y == m-1) return result;
                for(int j = 1; j < 9; j++){
                    int dirX = x + dir[j-1];
                    int dirY = y + dir[j];
                    if(dirX >= 0 && dirX < n && dirY >= 0 && dirY < m && grid[dirX][dirY] == 0){
                        grid[dirX][dirY] = 1;
                        queue.Enqueue(new int[]{dirX, dirY});
                    }   
                }
            }
        }
        return -1;
    }
}
