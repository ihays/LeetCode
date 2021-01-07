//Ian Hays
//01-06-2021
//https://leetcode.com/problems/add-digits/
//SC: O(1) TC: O(LOG(N))

class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            int x = num;
            num = 0;
            while(x){
                num += x%10;
                x/=10;
            }
        }
        return num;
    }
};
