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
            string input = "book";
            bool output = true;

            Assert.AreEqual(Solution.HalvesAreAlike(input), output);
        }

        [TestMethod]
        public void TestMethod2()
        {
            string input = "textbook";
            bool output = false;

            Assert.AreEqual(Solution.HalvesAreAlike(input), output);
        }

        [TestMethod]
        public void TestMethod3()
        {
            string input = "MerryChristmas";
            bool output = false;

            Assert.AreEqual(Solution.HalvesAreAlike(input), output);
        }

        [TestMethod]
        public void TestMethod4()
        {
            string input = "AbCdEfGh";
            bool output = true;

            Assert.AreEqual(Solution.HalvesAreAlike(input), output);
        }
        [TestMethod]
        public void TestMethod5()
        {
            string input = "tkPAdxpMfJiltOerItiv";
            bool output = false;

            Assert.AreEqual(Solution.HalvesAreAlike(input), output);
        }
    }
}