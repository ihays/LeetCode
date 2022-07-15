/***********************************************************************************************
Problem      Permutation In String
Developer    Ian Hays
Date         07/14/2022
URL          https://leetcode.com/problems/permutation-in-string/
Space        O(1) 
Time         O(N)
Description  Use a sliding window of size of s1 to determine if there is a permutation using two
             frequency arrays.
************************************************************************************************/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        array<int,26> arr1 = {};
        array<int,26> arr2 = {};
        int size = s1.size();
        
        for(auto ch: s1) arr1[ch-'a']++;
        
        for(int i = 0; i < s2.size(); i++){
            if(i >= size) arr2[s2[i-size]-'a']--;    
            arr2[s2[i]-'a']++;
            if(arr1 == arr2) return true;
        }
        
        return false;
    }
};
