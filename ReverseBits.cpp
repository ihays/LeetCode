//Ian Hays
//07-05-2020
//https://leetcode.com/problems/reverse-bits/
//SC: O(1) TC: O(N)

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = n&1;
        int i = 31;
        while(i--){
            res = res << 1;
            n = n >> 1;    
            res += n&1;
        }
        
        return res;
    }
};
