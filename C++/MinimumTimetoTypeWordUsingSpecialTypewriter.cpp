/***********************************************************************************************
Problem      Minimum Time to Type Word Using Special Typewriter
Developer    Ian Hays
Date         11/20/2021
URL          https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/
Space        O(1) 
Time         O(N)
Description  Find the sum of the minimum absolute difference between letters plus one
************************************************************************************************/

class Solution {
public:
    int minTimeToType(string word) {
        int res = min(abs(word[0]-'a'), 26-(word[0]-'a'))+1;
        for(int i = 1; i < size(word); i++){
            int word1 = word[i-1]-'a';
            int word2 = word[i]-'a';
            int time = word1 < word2 ? word1 - word2 + 26 : word2 - word1 + 26;
            res += min(time, abs(word1 - word2)) + 1;
        }
        return res;
    }
};
