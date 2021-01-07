//Ian Hays
//01-07-2021
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
//SC: O(1) TC: O(N)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        bool a[256] = {false};
        int l = 0, r = 0, res = 0, curr = 0;
        while(r < s.length()){
            if(!a[s[r]]){
                a[s[r]] = true;
                curr++;
                r++;
                res = max(curr,res);
            } else {
                while(a[s[r]]){
                    a[s[l]] = false;
                    curr--;
                    l++;
                }
            }
        }
        return res;
    }
};
