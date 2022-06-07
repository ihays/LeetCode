/***********************************************************************************************
Problem      Bulb Switcher
Developer    Ian Hays
Date         06/06/2022
URL          https://leetcode.com/problems/bulb-switcher/
Space        O(1) 
Time         O(1)
Description  Math problem, square root will give you the number of bulbs that are shut off. TLE
             for non math problem solution. 
************************************************************************************************/

class Solution1 {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};

class Solution2 {
public:
    int bulbSwitch(int n) {
        vector<bool> bulbs(n, true);
        for(int i = 2; i <= n; i++){
            int bulb = i;
            while(bulb <= n){
                bulbs[bulb-1] = !bulbs[bulb-1];
                bulb += i;
            }
        }
        
        return accumulate(begin(bulbs), end(bulbs), 0);
    }
};
