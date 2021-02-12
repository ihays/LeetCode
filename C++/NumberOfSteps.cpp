//Ian Hays
//07-11-2020
//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
//SC: O(1) TC: O(N)

class Solution {
public:
    int numberOfSteps (int num) {
        if(!num) return 0;
        return 1 + (num%2 ? numberOfSteps(num-1) : numberOfSteps(num/2));
    }
};
