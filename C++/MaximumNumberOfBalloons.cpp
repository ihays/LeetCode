/***********************************************************************************************
Problem      Maximum Number of Balloons
Developer    Ian Hays
Date         09/13/2021
URL          https://leetcode.com/problems/maximum-number-of-balloons/
Space        O(1) 
Time         O(1)
Description  Return the minimum frequency of the letters in balloon.
************************************************************************************************/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int freq[26]{};
        for(auto ch: text) freq[ch-'a']++;
        return min(freq[0],min(freq[1],min(freq[13],min(freq[11]/2, freq[14]/2))));
    }
};
