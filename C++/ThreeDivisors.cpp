/***********************************************************************************************
Problem      Three Divisors
Developer    Ian Hays
Date         08/1/2021
URL          https://leetcode.com/problems/three-divisors/
Space        O(1) 
Time         O(N)
Description  We increment divisors with a counter, if it exceeds 3 we return false, and return 
             true if its 3. 
************************************************************************************************/

class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(n%i == 0) count++;
            if(count > 3) return false;
        }
        return count == 3;
    }
};
