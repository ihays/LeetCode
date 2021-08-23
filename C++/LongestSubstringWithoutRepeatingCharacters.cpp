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
        int l = 0, r = 0, res = 0;
        unordered_map<int,int> freq;
        while(r < size(s)){
            freq[s[r]]++;
            while(freq[s[r]] == 2){
                freq[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};
