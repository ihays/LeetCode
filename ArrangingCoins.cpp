  
//Ian Hays
//07-01-2020
//https://leetcode.com/problems/arranging-coins/
//SC: O(1) TC: O(N)

class Solution {
public:
    int arrangeCoins(int n) {
        int res = 0;
        for(int i = 1; n >= i; i++){
            n-=i;
            res++;
        }
        return res;
    }
};
