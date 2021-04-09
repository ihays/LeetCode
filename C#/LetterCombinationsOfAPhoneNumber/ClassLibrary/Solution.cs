using System;
using System.Collections.Generic;
namespace ClassLibrary
{
    public static class Solution
    {
        public static IList<string> LetterCombinations(string digits) 
        {
            List<string> letters = new List<string>() {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            IList<string> result = new List<string>();
            if(!string.IsNullOrEmpty(digits)) result.Add("");
            for(int i = 0 ; i < digits.Length; i++)
            {                    
                int number = digits[i] - '0' - 2;
                IList<string> tmp = new List<string>();
                for(int j = 0; j < result.Count; j++)
                {
                    for(int k = 0; k < letters[number].Length; k++)
                    {
                        tmp.Add(result[j] + letters[number][k]);
                    }
                }
                result = tmp;
            }
            return result;
        }
    }
}
