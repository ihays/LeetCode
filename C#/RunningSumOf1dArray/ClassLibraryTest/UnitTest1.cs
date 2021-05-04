using Microsoft.VisualStudio.TestTools.UnitTesting;
using ClassLibrary;

namespace ClassLibraryTest
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void TestMethod1()
        {
            int[] input = {1,2,3,4};
            int[] output = {1,3,6,10};

            Solution sln = new Solution(); 
            
            CollectionAssert.AreEqual(sln.RunningSum(input),output);
        }

        [TestMethod]
        public void TestMethod2()
        {
            int[] input = {1,1,1,1,1};
            int[] output = {1,2,3,4,5};

            Solution sln = new Solution(); 
            
            CollectionAssert.AreEqual(sln.RunningSum(input),output);
        }


        [TestMethod]
        public void TestMethod3()
        {
            int[] input = {3,1,2,10,1};
            int[] output = {3,4,6,16,17};

            Solution sln = new Solution(); 
            
            CollectionAssert.AreEqual(sln.RunningSum(input),output);
        }
    }
}
