using System;
using ClassLibrary;
using System.Collections.Generic;

namespace Program
{
    
    class Program
    {
        static void Main(string[] args)
        {
            List<string> input = new List<string>() 
            {
                "book", 
                "textbook", 
                "MerryChristmas", 
                "AbCdEfGh"
            };

            foreach(string s in input){
                Console.WriteLine(Solution.HalvesAreAlike(s));
            }
        }
    }
}
