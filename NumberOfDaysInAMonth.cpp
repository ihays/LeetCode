//Ian Hays
//07-13-2020
//https://leetcode.com/problems/number-of-days-in-a-month/
//SC: O(1) TC: O(1)

//February leap year calculation: 
//If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
//If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
//If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
//The year is a leap year (it has 366 days).
//The year is not a leap year (it has 365 days).

//All other month calculation:
//if its july or before, we alternate between 31,30 based on whether or not it's an odd = 1 or 
//even month = 0. Starting in august, we flip and base it on whether it's even = 1 or odd = 0.

class Solution {
public:
    int numberOfDays(int Y, int M) {
        if(M == 2) return 28 + (Y % 4 == 0 ? Y % 100 == 0 ? Y % 400 == 0 ? 1 : 0 : 1 : 0);
        return 30 + ((M <= 7)  ? M & 1 :  !(M & 1));
    }
};
