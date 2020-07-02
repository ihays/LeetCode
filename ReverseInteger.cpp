//Ian Hays
//07-01-2020
//https://leetcode.com/problems/reverse-integer/
//SC: O(1) TC: O(N)

class Solution {
public:
    int reverse(int x) {
        long res = 0;
        
        while(x){
            res = x%10 + res*10;
            x/=10;
        }
        
        return (res < INT_MIN || res > INT_MAX) ? 0 : res;
    }
};
