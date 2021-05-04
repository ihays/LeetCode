using System;
using ClassLibrary;

namespace Program
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] nums = {1,2,3,4};

            Solution sln = new Solution();

            int[] result = sln.RunningSum(nums);

            foreach(int num in result)
            {
                Console.WriteLine(num);
            }
        }
    }
}
