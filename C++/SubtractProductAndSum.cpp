//Ian Hays
//07-01-2020
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
//SC: O(1) TC: O(N)

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        while(n){
            prod *= n%10;
            sum += n%10;
            n /= 10;
        }
        return prod-sum;      
    }
};