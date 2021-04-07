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