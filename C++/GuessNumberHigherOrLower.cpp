/***********************************************************************************************
Problem      Guess Number Higher or Lower
Developer    Ian Hays
Date         10/12/2021
URL          https://leetcode.com/problems/guess-number-higher-or-lower/
Space        O(1) 
Time         O(Log(N))
Description  We binary search for the number based on the API results for the guess.
************************************************************************************************/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 0, r = n;
        while(true){
            int m = l + (r - l)/2, g = guess(m);
            if(g == 0){
                return m;
            } else if(g == 1){
                l = m + 1;
            } else if(g == -1){
                r = m - 1;
            }
        }
    }
};
