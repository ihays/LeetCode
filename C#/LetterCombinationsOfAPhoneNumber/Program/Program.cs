using System;
using ClassLibrary;
using System.Collections.Generic;

namespace Program
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> list = new List<string>(Solution.LetterCombinations(""));

            foreach(string str in list)
            {
                Console.WriteLine(str);
            }
        }
    }
}
