/***********************************************************************************************
Problem      Strobogrammatic Number
Developer    Ian Hays
Date         03/08/2021
URL          https://leetcode.com/problems/strobogrammatic-number/
Space        O(1) 
Time         O(N)
Description  Checks end points moving towards middle of string to see if they match what is 
             defined as strobogrammatic in the map           
************************************************************************************************/

class Solution {
public:
    bool isStrobogrammatic(string num) {
        unordered_map<char,char> umap {
            {'6', '9'}, 
            {'9', '6'}, 
            {'0', '0'}, 
            {'1', '1'},
            {'8', '8'}
        };
        for(int i = 0; i < num.size(); i++){
            if(umap[num[i]] != num[num.size()-1-i]) return false;
        } 
        return true;
    }
};
