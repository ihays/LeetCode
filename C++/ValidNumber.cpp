/***********************************************************************************************
Problem      Valid Number
Developer    Ian Hays
Date         02/22/2022
URL          https://leetcode.com/problems/valid-number/
Space        O(1) 
Time         O(N)
Description  using a DFA with 9 states converted from a regex of the valid number
************************************************************************************************/

class Solution {
public:
    bool isNumber(string s) {
        int state = 0;
        for(auto ch: s){
            if(ch == '+' || ch == '-'){
                if(state == 0){
                    state = 1;    
                } else if(state == 5){
                    state = 6;  
                } else {
                    return false;
                }
            } else if(ch >= '0' && ch <= '9'){
                if(state == 0 || state == 2 || state == 1){
                    state = 2;
                } else if(state == 3 || state == 4){
                    state = 4;
                } else if(state == 8 || state == 9){
                    state = 9;
                } else if(state == 5 || state == 6 || state == 7){
                    state = 7;
                } else {
                    return false;
                }
            } else if(ch == '.'){
                if(state == 2){
                    state = 3;
                } else if(state == 1 || state == 0){
                    state = 8;
                } else{
                    return false;
                }
            } else if(ch == 'E' || ch == 'e'){
                if(state == 2 || state == 3 || state == 4 || state == 9){
                    state = 5;
                } else{
                    return false;
                }
            } else {
                return false;
            }
        }
        return state == 2 || state == 3 || state == 4 || state == 7 || state == 9;
    }
};
