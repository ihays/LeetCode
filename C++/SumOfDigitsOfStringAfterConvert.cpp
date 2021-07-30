/***********************************************************************************************
Problem      Sum of Digits of String After Convert
Developer    Ian Hays
Date         07/30/2021
URL          https://leetcode.com/problems/sum-of-digits-of-string-after-convert/
Space        O(N) 
Time         O(N^2)
Description  We convert initial string into digit string. For each iteration of k, we sum the digits
             and create a new string. We return the result.
************************************************************************************************/

class Solution {
public:
    int getLucky(string s, int k) {
        string tmp = "";
        for(int i = 0; i < size(s); i++){
            tmp += to_string(s[i] - 'a' + 1);    
        }   
        s = tmp;
        int res{};
        for(int i = 0; i < k; i++){
            res = 0;
            for(auto ch: s){
                res += ch-'0';
            }
            s = to_string(res);
        }
        return res;
    }
};

