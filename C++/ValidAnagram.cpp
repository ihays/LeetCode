//Ian Hays
//07-01-2020
//https://leetcode.com/problems/valid-anagram/
//SC: O(1) TC: O(N*LOG(N))
//solution by sort. Not the fastest, but constant space complexity & 3 lines.

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
