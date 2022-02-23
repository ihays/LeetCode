/***********************************************************************************************
Problem      Valid Number
Developer    Ian Hays
Date         02/22/2022
URL          https://leetcode.com/problems/valid-number/
Space        O(1) 
Time         O(N)
Description  Determine if separated by e and check if it's a decimal or integer based on criteria
             provided by the problem.
************************************************************************************************/

class Solution {
public:
    bool isNumber(string s) {
        int count = 0, ePos;
        char e;
        for(auto ch: s){
            if(ch == 'e' || ch == 'E'){
                if(count++ > 1) return false;
                e = ch; 
            } else if(ch >= '0' && ch <= '9' || ch == '+' || ch == '-' || ch == '.'){
                continue;    
            } else {
                return false;    
            }
        }
        if(s[0] == '-' || s[0] == '+') s = s.substr(1);
        if(count){
            ePos = s.find(e);
            string prefix = s.substr(0, ePos);
            string suffix = s.substr(ePos+1, size(s)-(ePos+1));
            if(suffix[0] == '-' || suffix[0] == '+') suffix = suffix.substr(1);
            return (isDecimal(prefix) || isInteger(prefix)) && isInteger(suffix);
        } else {
            return isDecimal(s) || isInteger(s);
        }
    }
    
    bool isDecimal(string s){
        if(s.empty()) return false;
        int index = 0, count = 0;
        for(int i = index; i < size(s); i++){
            if(s[i] == '.'){
                count++;    
            } else if(s[i] < '0' || s[i] > '9'){
                return false;
            }
        }
        return count == 1 && size(s) > 1;
    }
    
    bool isInteger(string s){
        if(s.empty()) return false;
        int index = 0;
        for(int i = index; i < size(s); i++){
            if(s[i] < '0' || s[i] > '9') return false;
        }
        return true;
    }
};
