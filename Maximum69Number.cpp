//Ian Hays
//07-12-2020
//https://leetcode.com/problems/maximum-69-number/
//SC: O(1) TC: O(N)

class Solution {
public:
    int maximum69Number (int num) {
        int res = num;
        int add = 3;
        int resadd = 0;
        while(num){
            if(num%10 == 6){
                resadd = add;
            }
            add*=10;
            num/=10;
        }
        return res + resadd;
    }
};
