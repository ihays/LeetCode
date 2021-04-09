/***********************************************************************************************
Problem      Letter Combinations of a Phone Number
Developer    Ian Hays
Date         04/08/2021
URL          https://leetcode.com/problems/letter-combinations-of-a-phone-number/
Space        O(N^2) 
Time         O(N^2)
Description  Result list will append each letter of a number to all that exists in the list. doing
             this for each digit causes the list to grow O(N^2).
************************************************************************************************/

public class Solution {
    public IList<string> LetterCombinations(string digits) {
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