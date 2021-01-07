//Ian Hays
//01-07-2021
//https://leetcode.com/problems/is-subsequence/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0;
        int r = 0;
        while(r < t.length()){
            if(s[l] == t[r]) l++;
            r++;
        }
        return l == s.length();
    }
};
