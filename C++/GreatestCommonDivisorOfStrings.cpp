
/***********************************************************************************************
Problem      Greatest Common Divisor of Strings
Developer    Ian Hays
Date         07/27/2021
URL          https://leetcode.com/problems/greatest-common-divisor-of-strings/
Space        O(1) 
Time         O(1)
Description  if the appending of each string is equivalent to an append in different order, this
             means both strings are made up of a common divisor. We find the common divisor by
             using prebuilt gcd function to find the greatest common divisor in terms of number.
             We return the substring of those, otherwise empty string.
************************************************************************************************/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1+str2==str2+str1) ? str1.substr(0,gcd(size(str1),size(str2))) : "";
    }
};
