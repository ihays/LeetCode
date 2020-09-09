  
//Ian Hays
//07-14-2020
//https://leetcode.com/problems/angle-between-hands-of-a-clock/
//SC: O(1) TC: O(1)

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double res = abs(fmod(((double)hour/12 * 360 + 1 * (double)minutes/60 * 360/12),360) - (double)minutes/60 * 360);
        return res > 180 ? 360 - res : res;
    }
};
