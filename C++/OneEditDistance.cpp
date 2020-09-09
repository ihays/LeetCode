//Ian Hays
//07-26-2020
//https://leetcode.com/problems/one-edit-distance/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int m = s.length();
        int n = t.length();
        if(s == t || abs(m-n) > 1) return false;
        int res  = 0;
        if(abs(m-n) == 1){
            if(m < n){
                s.swap(t);
                swap(m,n);
            } 
            if(s.substr(0,n) == t || min(m,n) == 0) return true;
            for(int i = 0, j = 0; i < n && j < m; i++,j++){
                if(t[i] != s[j]){
                    res++;
                    i--;
                }
            }
        } else if(m == n){
            for(int i = 0; i < n; i++){
                if(s[i] != t[i]){
                    res++;
                }
            }
        }
        return res == 1;   
    }
};
