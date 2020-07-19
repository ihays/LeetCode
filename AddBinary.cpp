//Ian Hays
//07-19-2020
//https://leetcode.com/problems/add-binary/
//SC: O(N) TC: O(N)

class Solution {
public:
    string addBinary(string a, string b) {
        int A = a.size()-1;
        int B = b.size()-1;
        int carry = 0;
        string s = "";
        
        while(A >= 0 || B >= 0 || carry > 0){
            carry += A >= 0 ? a[A--] - '0' : 0;
            carry += B >= 0 ? b[B--] - '0' : 0;
            s = ((carry%2) ? '1' : '0') + s;
            carry = carry > 1 ? 1 : 0;
            
        }
        
        return s;
        
    }
};
