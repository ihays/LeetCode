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
            int input = Solution.CountLargestGroup(13);
            int output = 4;

            Assert.AreEqual(input, output);
        }
        [TestMethod]
        public void TestMethod2()
        {
            int input = Solution.CountLargestGroup(2);
            int output = 2;
            
            Assert.AreEqual(input, output);
        }
        [TestMethod]
        public void TestMethod3()
        {
            int input = Solution.CountLargestGroup(15);
            int output = 6;
            
            Assert.AreEqual(input, output);
        }
        [TestMethod]
        public void TestMethod4()
        {
            int input = Solution.CountLargestGroup(24);
            int output = 5;
            
            Assert.AreEqual(input, output);
        }

    }
}
