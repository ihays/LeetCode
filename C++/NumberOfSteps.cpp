//Ian Hays
//02-12-21
//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
//SC: O(1) TC: O(N) - 1 liner, recursive

class Solution {
public:
    int numberOfSteps (int num) {
        return !num ? 0 : 1 + numberOfSteps(num%2 ? num-1 : num/2);
    }
};
