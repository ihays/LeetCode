/***********************************************************************************************
Problem      Find The Celebrity
Developer    Fabian
Date         03/28/2021
URL          https://leetcode.com/problems/palindrome-number/
Space        O(N) 
Time         O(1)
Description  Determines palindrome by checking outermost characters by incrementation. Returns 
             false if characters are not equivalent.
************************************************************************************************/
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int l = 0;
        int r = str.size()-1;
        while(l < r){
            if(str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
