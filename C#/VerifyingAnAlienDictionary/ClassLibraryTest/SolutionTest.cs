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
            string[] words = {"hello","leetcode"};
            string order = "hlabcdefgijkmnopqrstuvwxyz";

            bool input = Solution.IsAlienSorted(words, order);
            bool output = true;

            Assert.AreEqual(input,output);
        }
        [TestMethod]
        public void TestMethod2()
        {
            string[] words = {"word","world","row"};
            string order = "worldabcefghijkmnpqstuvxyz";

            bool input = Solution.IsAlienSorted(words, order);
            bool output = false;

            Assert.AreEqual(input,output);
        }
        [TestMethod]
        public void TestMethod3()
        {
            string[] words = {"apple","app"};
            string order = "abcdefghijklmnopqrstuvwxyz";

            bool input = Solution.IsAlienSorted(words, order);
            bool output = false;

            Assert.AreEqual(input,output);
        }
    }
}
