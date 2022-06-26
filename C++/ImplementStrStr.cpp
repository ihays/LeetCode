/***********************************************************************************************
Problem      Implement strStr()
Developer    Ian Hays
Date         06/26/2022
URL          https://leetcode.com/problems/implement-strstr/
Space        O(1) 
Time         O(N)
Description  Pattern match needle to haystack by traversing through haystack and comparing needle. 
************************************************************************************************/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        
        int n = size(haystack);
        int m = size(needle);
        
        for(int i = 0; i < n-m+1; i++){
            int j = 0;
            for(; j < m; j++){
                if(haystack[i+j] != needle[j]) break;
            }
            if(j == m) return i;
        }
        
        
        return -1;
    }
};
