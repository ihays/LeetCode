/***********************************************************************************************
Problem      Remove All Adjacent Duplicates in String
Developer    Ian Hays
Date         06/28/2021
URL          https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
Space        O(N)
Time         O(N)
Description  Iterate through string pushing back characters. If a duplicate is found, we remove 
             the last element of the string, otherwise add it to our result string.
************************************************************************************************/

class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        for(char ch: s){
            if(!res.empty() && res.back() == ch)
                res.pop_back();
            else
                res.push_back(ch);         
        }
        return res;
    }
}; 
