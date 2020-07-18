//Ian Hays
//07-18-2020
//https://leetcode.com/problems/armstrong-number/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool isArmstrong(int N) {
        int res = N;
        int exp = 0;
        while(N){
            N/=10;
            exp++;
        }
        N = res;
        while(N){
            res -= pow(N%10,exp);
            N/=10;
        }
        return res == 0;
    }
};
