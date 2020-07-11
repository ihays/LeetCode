//Ian Hays
//07-11-2020
//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
//SC: O(1) TC: O(N)

class Solution {
public:
    int numberOfSteps (int num) {
        int res = 0;
        while(num){
            num = num%2 ? num-1 : num/2;
            res++;
        }
        return res;
    }
};
