/***********************************************************************************************
Problem      Check if String Is Decomposable Into Value-Equal Substrings
Developer    Ian Hays
Date         07/18/2021
URL          https://leetcode.com/problems/check-if-string-is-decomposable-into-value-equal-substrings/
Space        O(1) 
Time         O(N)
Description  Iterating through the string - 3 match: we continue, 2 match: we set a found variable to
             true, all others we return false. If we run across a 2 match more than once, we return
             false. We return the resulting found variable to denote that there was atleast one 2 match.
************************************************************************************************/

class Solution {
public:
    bool isDecomposable(string s) {
        int index = 0;
        bool found = false;
        while(index < size(s)){
            if(s[index] == s[index+1] && s[index] == s[index+2]){
                index += 3;
            } else if (s[index] == s[index+1]){
                if(found) return false;
                found = true;
                index += 2;
            } else {
                return false;
            }
        }
        return found;
    }
};
