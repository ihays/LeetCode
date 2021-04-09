using System;
using ClassLibrary;

namespace Program
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] words = {"apple","app"};
            string order = "abcdefghijklmnopqrstuvwxyz";

            bool input = Solution.IsAlienSorted(words, order);

            Console.WriteLine(input);
        }
    }
}