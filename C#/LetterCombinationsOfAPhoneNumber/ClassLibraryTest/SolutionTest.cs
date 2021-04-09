using Microsoft.VisualStudio.TestTools.UnitTesting;
using System.Collections.Generic;
using ClassLibrary;

namespace ClassLibraryTest
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void TestMethod1()
        {
            List<string> input = new List<string>(Solution.LetterCombinations("23"));
            List<string> output = new List<string>() 
            {
                "ad","ae","af","bd","be","bf","cd","ce","cf"
            };
            CollectionAssert.AreEqual(input,output);
        }
        [TestMethod]
        public void TestMethod2()
        {
            List<string> input = new List<string>(Solution.LetterCombinations("")); 
            List<string> output = new List<string>();

            CollectionAssert.AreEqual(input,output);

        }
        [TestMethod]
        public void TestMethod3()
        {
            List<string> input = new List<string>(Solution.LetterCombinations("2"));
            List<string> output = new List<string>() 
            {
                "a","b","c"
            };

            CollectionAssert.AreEqual(input,output);
        }
    }
}
