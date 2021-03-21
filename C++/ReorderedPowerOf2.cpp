/***********************************************************************************************
Problem      Reordered Power of 2
Developer    Ian Hays
Date         03/21/2021
URL          https://leetcode.com/problems/reordered-power-of-2/
Space        O(N) 
Time         O(NLOG(N)))
Description  Sort N and compare against all powers of two sorted. Return true if equivalent. This 
             works because if a number has a permutation that is a power of two, there would only 
             be one permutation (bit count of a power of two is always 1). Since there is only one
             permutation for each power of 2, sorting both will give us the unique identifier 
             representing the power of 2 number. 
************************************************************************************************/

class Solution {
public:
    bool reorderedPowerOf2(int N) {
        string Nstr = sortNumber(to_string(N));
        for(int i = 0; i < 32; i++){
            if(Nstr == sortNumber(to_string(1 << i))) return true;
        }
        return false;
    }
    
    string sortNumber(string str){
        sort(str.begin(), str.end());
        return str;
    }
};
