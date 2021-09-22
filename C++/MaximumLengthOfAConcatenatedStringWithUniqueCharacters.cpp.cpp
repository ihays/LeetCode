/***********************************************************************************************
Problem      Maximum Length of a Concatenated String with Unique Characters
Developer    Ian Hays
Date         09/22/2021
URL          https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
Space        O(1) 
Time         O(N)
Description  We use bitset to determine if string is unique, and then store unique combinations in
             a dp vector to find maximum length.
************************************************************************************************/

class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<bitset<26>> dp = {bitset<26>()};
        int res = 0;
        
        for(auto str: arr){
            bitset<26> a;
            for(auto ch: str){
                a.set(ch-'a');
            }
            int n = a.count();
            if(n < size(str)) continue;
            for(int i = size(dp)-1; i >= 0; i--){
                bitset<26> b = dp[i];
                if((a & b).any()) continue;
                bitset<26> c(a | b);
                dp.push_back(c);
                res = max(res, (int)c.count());
            }
        }
        return res;
    }
};
