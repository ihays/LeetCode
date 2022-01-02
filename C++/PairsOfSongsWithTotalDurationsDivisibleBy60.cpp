/***********************************************************************************************
Problem      Pairs of Songs With Total Durations Divisible by 60
Developer    Ian Hays
Date         1/1/2022
URL          https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
Space        O(1)
Time         O(N)
Description  We store the needed value to make a pair in times, and sum pairs for the result. 
************************************************************************************************/

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> times(60);
        int res = 0;
        for(auto t : time){
            res += times[(600 - t) % 60];
            times[t%60]++;
        }
        return res;
    }
};
