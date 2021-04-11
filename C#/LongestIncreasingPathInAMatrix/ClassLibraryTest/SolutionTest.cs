using Microsoft.VisualStudio.TestTools.UnitTesting;
using ClassLibrary;

namespace ClassLibraryTest
{
    [TestClass]
    public class SolutionTest
    {
        [TestMethod]
        public void TestMethod1()
        {
            int[][] matrix = new int[][]
            {
                new int[]{9,9,4},
                new int[]{6,6,8},
                new int[]{2,1,1}
            };

            Solution sln = new Solution();
            int input = sln.LongestIncreasingPath(matrix);
            int output = 4;

            Assert.AreEqual(input,output);
        }
        [TestMethod]
        public void TestMethod2()
        {
            int[][] matrix = new int[][]
            {
                new int[]{3,4,5},
                new int[]{3,2,6},
                new int[]{2,2,1}
            };

            Solution sln = new Solution();
            int input = sln.LongestIncreasingPath(matrix);
            int output = 4;

            Assert.AreEqual(input,output);
        }
    }
}
