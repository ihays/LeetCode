/***********************************************************************************************
Problem      Isomorphic Strings
Developer    Ian Hays
Date         07/25/2022
URL          https://leetcode.com/problems/isomorphic-strings/
Space        O(1) 
Time         O(N)
Description  while traversing through input strings, map characters from s to t, and t to s. If 
             the mapping changes, we return false. 
************************************************************************************************/

class Solution {
    public boolean isIsomorphic(String s, String t) {
        int[] alph1 = new int[256];
        int[] alph2 = new int[256]; 
        
        for(int i = 0; i < s.length(); i++){
            if(alph1[s.charAt(i)] == 0){
                alph1[s.charAt(i)] = t.charAt(i);    
            } else if(alph1[s.charAt(i)] != t.charAt(i)){
                return false;
            }
            if(alph2[t.charAt(i)] == 0){
                alph2[t.charAt(i)] = s.charAt(i);
            } else if(alph2[t.charAt(i)] != s.charAt(i)){
                return false;
            }
        }
        return true;
    }
}
