/***********************************************************************************************
Problem      Find The Celebrity
Developer    Fabian
Date         03/28/2021
URL          https://leetcode.com/problems/PalindromeNumber/
Space        O(N) 
Time         O(1)
Description  Tell the steps on how the problem is solved             
************************************************************************************************/
class Solution {
public:
    bool isPalindrome(int x) {
        string xs = to_string(x);
        for(int i; i< xs.length(); i++){
            if(xs[0] == '-') continue;
            if(xs[i] == xs[xs.length()-i])
                
        }
    }
};
