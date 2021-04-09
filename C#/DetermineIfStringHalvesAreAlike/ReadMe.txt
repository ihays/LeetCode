/***********************************************************************************************
Problem      Determine if String Halves Are Alike
Developer    Ian Hays
Date         04/07/2021
URL          https://leetcode.com/problems/determine-if-string-halves-are-alike/
Space        O(N) 
Time         O(N)
Description  Create a hashset of vowels (lowercase & uppercase). Iterate through string, if char
             position is first half, increment result, otherwise decrement result. If each half is
             equivalent with vowels, result would be 0. We return true if result is 0.        
************************************************************************************************/

public class Solution {
    public bool HalvesAreAlike(string s) {
            HashSet<char> hset = new HashSet<char>() {'a','e','i','o','u','A','E','I','O','U'};
            int length = s.Length;
            int result = 0;
            for(int i = 0; i < length; i++){
                if(hset.Contains(s[i]))
                {
                    result += i >= length/2 ? 1 : -1; 
                }
            }
            return result == 0;
    }
}
