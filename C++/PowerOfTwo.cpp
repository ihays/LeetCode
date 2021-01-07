//Ian Hays
//01-06-2021
//https://leetcode.com/problems/power-of-two/
//SC: O(1) TC: O(LOG(N))

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        while(n%2 == 0){
            n/=2;
        }
        return n == 1;
    }
    
    bool isPowerOfTwoBitWise(int n) {
        return n > 0 && (n & (n-1)) == 0;
    }
};
