/***********************************************************************************************
Problem      1-bit and 2-bit Characters
Developer    Ian Hays
Date         05/19/2021
URL          https://leetcode.com/problems/1-bit-and-2-bit-characters/
Space        O(1) 
Time         O(N)
Description  We move index by 2 if leading bit is 1, 1 if leading bit is 0. Return true if leading
             bit was 0, otherwise false
************************************************************************************************/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int index = 0;
        bool res;
        
        while(index < bits.size()){
            res = bits[index] ? false : true;
            index += bits[index] ? 2 : 1;
        }
        
        return res;
    }
};
