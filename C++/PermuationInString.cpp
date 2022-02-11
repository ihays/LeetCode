/***********************************************************************************************
Problem      Permuation In String
Developer    Ian Hays
Date         02/11/2022
URL          https://leetcode.com/problems/permutation-in-string/
Space        O(1) 
Time         O(N)
Description  Use sliding window to check frequency of characters based on the size of s1
************************************************************************************************/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        array<int, 26> arr1 = {};
        array<int, 26> arr2 = {};
        
        for(auto ch: s1){
            arr1[ch-'a']++;    
        } 

        for(int r = 0, l = 0-s1.size(); r < s2.size(); r++, l++){
            arr2[s2[r]-'a']++;
            if(l >= 0) arr2[s2[l]-'a']--;
            if(arr1 == arr2) return true;
        }
        return false;
        
    }
};
