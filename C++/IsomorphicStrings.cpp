/***********************************************************************************************
Problem      Isomorphic Strings
Developer    Ian Hays
Date         07/12/2021
URL          https://leetcode.com/problems/isomorphic-strings/
Space        O(N)
Time         O(N)
Description  Use mapping array to determine if strings relations biject 1 to 1.
************************************************************************************************/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return normalize(s,t) && normalize(t,s);
    }
    bool normalize(string a, string b){
        char mapping[128] = {};
        for(int i = 0; i < size(a); i++){
            if(mapping[a[i]] == 0)
                mapping[a[i]] = b[i];    
            else if(mapping[a[i]] != b[i]) return false;
        }
        return true;
    }  
};


