//Ian Hays
//01-06-2021
//https://leetcode.com/problems/factorial-trailing-zeroes/
//SC: O(1) TC: O(Log(N))

class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        int x = 1;
        while(x < n){
            x *= 5;
            res += n/x;
        }
        return res;
    }
};
