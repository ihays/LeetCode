  
//Ian Hays
//07-02-2020
//https://leetcode.com/problems/number-of-1-bits/
//SC: O(1) TC: O(N)

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        unsigned long m = 1;
        while(m <= n && m <= UINT_MAX){
            if(n & m) res++;
            m = m << 1;
        }
        return res;
        
    }
};
