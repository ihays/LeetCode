/***********************************************************************************************
Problem      Break a Palindrome
Developer    Ian Hays
Date         09/22/2021
URL          https://leetcode.com/problems/break-a-palindrome//
Space        O(1) 
Time         O(N)
Description  We find the first value that isn't an 'a' in a palindrome and return it replaced with
             an 'a' as long as it isn't the middle character of the string. Otherwise we set the 
             last character to 'b' and return if not under 2 characters long or we return empty string.
************************************************************************************************/

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int index = palindrome.find_first_not_of("a"), n = size(palindrome);
        if(index != -1 && n/2 != index){
            palindrome[index] = 'a';
            return palindrome;
        }
        
        palindrome.back() = 'b';
        return n < 2 ? "" : palindrome;
    }
};
