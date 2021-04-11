using System;
using System.Collections.Generic;
using System.Linq;

namespace ClassLibrary
{
    public class Solution
    {
        public int m;
        public int n;
        public int LongestIncreasingPath(int[][] matrix) 
        {
            m = matrix.Length;
            n = matrix[0].Length;
            int[,] visited = new int[m,n];

            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(visited[i,j] == 0)
                    {
                        dfs(matrix,visited,i,j,1);
                    }
                }
            }
            return visited.Cast<int>().Max();
        }
        public int[] dir = {0,1,0,-1,0};
        public void dfs(int[][] matrix, int[,] visited, int x, int y, int result)
        {
            visited[x,y] = result++;
            for(int i = 1; i < dir.Length; i++)
            {
                int dirX = x + dir[i-1];
                int dirY = y + dir[i];
                if(dirX >= 0 && dirX < m && dirY >= 0 && dirY < n && matrix[dirX][dirY] < matrix[x][y] && visited[dirX,dirY] < result)
                {
                    dfs(matrix,visited,dirX,dirY,result);
                }
            }
        }
    }
}
