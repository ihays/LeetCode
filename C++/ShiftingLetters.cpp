/***********************************************************************************************
Problem      Shifting Letters
Developer    Ian Hays
Date         09/08/2021
URL          https://leetcode.com/problems/shifting-letters/
Space        O(1) 
Time         O(N)
Description  We shift the number of times with one pass right to left accumulating the number 
             of times for each element while modding the count of the alphabet (26). 
************************************************************************************************/

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int times = 0;
        for(int i = size(shifts)-1; i >= 0; i--){
            times = (times + shifts[i]) % 26;
            s[i] = 'a' + (s[i] - 'a' + times) % 26;
        }
        return s;
    }
};
