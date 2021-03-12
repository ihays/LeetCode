/***********************************************************************************************
Problem      Check If a String Contains All Binary Codes of Size K
Developer    Ian Hays
Date         03/12/2021
URL          https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
Space        O(N) 
Time         O(N)
Description  build a set of binary codes that exist in s. Verify that the size of the set is equal
             to the number of codes of size k. 
************************************************************************************************/

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k > s.size()) return false;
        unordered_set<string> uset;
        for(int i = 0; i <= s.size()-k; i++){
            uset.insert(s.substr(i,k));    
        } 
        return uset.size() == pow(2,k);
    }
};
