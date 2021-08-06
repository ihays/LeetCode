/***********************************************************************************************
Problem      Decode XORed Array
Developer    Ian Hays
Date         08/05/2021
URL          https://leetcode.com/problems/decode-xored-array/
Space        O(N) 
Time         O(N)
Description  Xor previous value to encoded value to get the inverse and place into result array.
************************************************************************************************/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res(size(encoded)+1);
        res[0] = first;        
        for(int i = 1; i < res.size(); i++) 
            res[i] = res[i-1] ^ encoded[i-1];
        return res;
    }
};
