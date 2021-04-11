using System;
using ClassLibrary;

namespace Program
{
    class Program
    {
        static void Main(string[] args)
        {
            int[][] matrix = new int[][]
            {
                new int[]{3,4,5},
                new int[]{3,2,6},
                new int[]{2,2,1}
            };
            
            Solution sln = new Solution();

            Console.WriteLine(sln.LongestIncreasingPath(matrix));
        }
    }
}
