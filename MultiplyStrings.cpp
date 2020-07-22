//Ian Hays
//07-22-2020
//https://leetcode.com/problems/multiply-strings/
//SC: O(N+M) TC: O(N*M)
//DP: store value of current product in place holder i+j+1 (i represents the left shift for each row of numbers to add, j represents the left
//shift for each product) and add to value as product is built.

class Solution {
public:
    string multiply(string num1, string num2) {
        string res(num1.length()+num2.length(), '0');
        int product = 0;
        for(int i = num1.size()-1; i >= 0; i--){
            int carry = 0;
            for(int j = num2.size()-1; j >= 0; j--){
                product = (res[i+j+1] - '0') + (num1[i]-'0') * (num2[j]-'0') + carry;
                carry = product/10;
                res[i+j+1] = (product%10) + '0';
                if(j == 0) res[i+j] = carry + '0';
            }
        }
        while(res[0] == '0' && res.size() > 1) res.erase(res.begin());
        return res;
    }
};
