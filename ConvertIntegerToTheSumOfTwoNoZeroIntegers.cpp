/***********************************************************************************************
Problem      Convert Integer to the Sum of Two No-Zero Integers
Developer    Ian Hays
Date         06/13/2021
URL          https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
Space        O(1) 
Time         O(N)
Description  from 1 to n, determine if n or n-i both have non-zero integers and return. 
************************************************************************************************/

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n; i++){
            if(isNoZero(i) && isNoZero(n-i)){
                return {i, n-i};
            }
        }
        return vector<int>();
    }
    
    bool isNoZero(int num){
        while(num){
            if(num%10 == 0){
                return false;
            }
            num /= 10;
        }
        return true;
    }
};
