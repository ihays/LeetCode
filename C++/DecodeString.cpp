/***********************************************************************************************
Problem      Decode String
Developer    Ian Hays
Date         09/18/2021
URL          https://leetcode.com/problems/decode-string/
Space        O(N) 
Time         O(N)
Description  We build the decode by generating the quantity and recursively grabing the resulting
             string.
************************************************************************************************/

class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return decodeString(s,i);
    }
    
    string decodeString(string& s, int& i){
        string result;
        while(i < size(s) && s[i] != ']'){
            if(isdigit(s[i])){
                int n = 0;
                while(isdigit(s[i])) n = n * 10 + s[i++] - '0';
                i++;
                string res = decodeString(s, i);
                i++;
                while(n--){
                    result += res;
                }
            } else {
                result += s[i++];
            }
        }
        return result;
    }
};
