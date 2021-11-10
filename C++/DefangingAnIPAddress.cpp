/***********************************************************************************************
Problem      Defanging an IP Address
Developer    Ian Hays
Date         11/09/2021
URL          https://leetcode.com/problems/defanging-an-ip-address/
Space        O(N) 
Time         O(N)
Description  rebuild result array with [.] for '.' and return.
************************************************************************************************/

class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(auto ch: address){
            if(ch == '.') res += "[.]";
            else res += ch;
        } 
        return res;
    }
};
