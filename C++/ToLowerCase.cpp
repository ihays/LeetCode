/***********************************************************************************************
Problem      To Lower Case
Developer    Ian Hays
Date         05/24/2021
URL          https://leetcode.com/problems/to-lower-case/
Space        O(1) 
Time         O(N)
Description  iterate through string, if upper case, change to lowercase by adding space char ' '.
************************************************************************************************/

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += ' ';
            }
        }
        return s;
    }
};
