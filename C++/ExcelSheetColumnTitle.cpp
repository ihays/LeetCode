//Ian Hays
//01-06-2021
//https://leetcode.com/problems/excel-sheet-column-title/
//SC: O(LOG_26(n)) TC: O(LOG_26(n))

class Solution {
public:
    string convertToTitle(int n) {
        string res;
        while(n){
            res = char('A' + (n-1)%26) + res;
            n = (n-1)/26;
        }
        return res;
    }
};
