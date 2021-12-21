/***********************************************************************************************
Problem      Remove K Digits
Developer    Ian Hays
Date         12/21/2021
URL          https://leetcode.com/problems/remove-k-digits/
Space        O(1)
Time         O(1)
Description  Remove next largest digit k times.
************************************************************************************************/

class Solution {
public:
    string removeKdigits(string num, int k) {
        while(k--){
            int i = 0;
            while(i+1 < size(num) && num[i] <= num[i+1]) i++;
            num.erase(i, 1);
        }
        int index = 0;
        while(num[index] == '0' && index < size(num)){
            index++;
        }
        num = num.substr(index);
        return num == "" ? "0" : num;
    }
};

