//Ian Hays
//01-06-2021
//https://leetcode.com/problems/excel-sheet-column-number/
//SC: O(1) TC: O(LOG_26(N))

class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        long long x = 1;
        for(int i = s.size()-1; i >= 0; i--){
            res += (s[i] - 'A' + 1) * x;
            x *= 26;
        }
        return res;
    }
};
