/***********************************************************************************************
Problem      Longest Substring Without Repeating Characters
Developer    Ian Hays
Date         08/22/2021
URL          https://leetcode.com/problems/longest-substring-without-repeating-characters/
Space        O(N) 
Time         O(N)
Description  Store characters in a frequency map using a sliding window to keep track of the longest
             substring without repeating characters. 
************************************************************************************************/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, res = 0, frq[256] = {};
        while(r < size(s)){
            if(frq[s[r]]++){
                while(frq[s[r]] == 2){
                    frq[s[l++]]--;
                }
            } 
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
};
