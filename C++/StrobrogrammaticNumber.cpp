/***********************************************************************************************
Problem      Strobogrammatic Number
Developer    Ian Hays
Date         07/15/2021
URL          https://leetcode.com/problems/strobogrammatic-number/
Space        O(1) 
Time         O(N)
Description  Checks end points moving towards middle of string to see if they match what is 
             defined as strobogrammatic in the map           
************************************************************************************************/

class Solution {
public:
    bool isStrobogrammatic(string num) {
        unordered_map<char,char> umap = {{'6', '9'},{'9', '6'},{'1', '1'},{'0', '0'},{'8', '8'}};
        int l = 0, r = size(num)-1;
        while(l <= r) if(umap[num[l++]] != num[r--]) return false;
        return true;
    }
};
