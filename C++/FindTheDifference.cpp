//Ian Hays
//01-07-2021
//https://leetcode.com/problems/find-the-difference/
//SC: O(1) TC: O(N)

class Solution {
public:
    char findTheDifference(string s, string t) {
        int a[26] = {0};
        int i;
        for(i = 0; i < s.length(); i++){
            a[s[i] - 'a']++;
            a[t[i] - 'a']--;
        }
        a[t[i] - 'a']--;
        for(i = 0; i < 26; i++){
            if(a[i] != 0) break;
        }
        return 'a' + i;
    }
};
