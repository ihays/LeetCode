/***********************************************************************************************
Problem      Reconstruct Original Digits From English
Developer    Ian Hays
Date         03/28/2021
URL          https://leetcode.com/problems/reconstruct-original-digits-from-english/
Space        O(N) 
Time         O(N)
Description  Map digits for input string, and string digits. Evaluate even numbers first and then odd (trick:
             https://leetcode.com/problems/reconstruct-original-digits-from-english/discuss/91210/Fun-fact).
             placing numbers into a result string sorting at the end. 
************************************************************************************************/

class Solution {
public:
    vector<string> digits = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    unordered_map<string,string> map{
        {"zero", "0"},
        {"one", "1"},
        {"two", "2"},
        {"three", "3"},
        {"four", "4"},
        {"five", "5"},
        {"six", "6"},
        {"seven", "7"},
        {"eight", "8"},
        {"nine", "9"}
    };
    
    string originalDigits(string s) {
        vector<vector<int>> numberMap(10, vector<int>(26));
        for(int i = 0; i < 10; i++){
            string digit = digits[i];
            numberMap[i] = buildMap(digit);
        }
                                     
        vector<int> inputMap = buildMap(s);
        string res;
        
        //even;
        for(int i = 0; i < 10;){
            int j;
            for(j = 0; j < 26; j++){
                if(inputMap[j] < numberMap[i][j]){
                    break;
                }
            }
            if(j == 26){
                for(j = 0; j < 26; j++){
                    inputMap[j] -= numberMap[i][j];
                }
                res += map[digits[i]];  
            } else {
                i+=2;
            }
        }

        //odd
        for(int i = 1; i < 10;){
            int j;
            for(j = 0; j < 26; j++){
                if(inputMap[j] < numberMap[i][j]){
                    break;
                }
            }
            if(j == 26){
                for(j = 0; j < 26; j++){
                    inputMap[j] -= numberMap[i][j];
                }
                res += map[digits[i]];  
            } else {
                i+=2;
            }
        }
        
        sort(res.begin(),res.end());
        return res; 
    }
    
    vector<int> buildMap(string& str){
        vector<int> inputMap(26);
        for(auto ch: str){
            inputMap[ch-'a']++;
        }
        return inputMap;
    }
};