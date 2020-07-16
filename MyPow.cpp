//Ian Hays
//07-16-2020
//https://leetcode.com/problems/powx-n/
//SC: O(1) TC: O(LOG(N))


class Solution {
public:
    double myPow(double x, int n) {
        if(n == INT_MIN){
            n = -(n+1);
            x = 1/(x*x);
        }
        if(n < 0){
            n = -n;
            x = 1/x;
        }
        double ans = 1;
        while(n){
            if(n&1) ans *= x;
            x *= x;
            n >>= 1;
        }
        return ans;
    }
};
