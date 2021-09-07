/***********************************************************************************************
Problem      Slowest Key
Developer    Ian Hays
Date         09/06/2021
URL          https://leetcode.com/problems/slowest-key/
Space        O(1) 
Time         O(N)
Description  Iterate through releaseTimes determining the longest time setting result to corresponding
             keyPressed. If there are keys with the same max time, we choose the largest lexicographically
             key and return.
************************************************************************************************/

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char res = keysPressed[0];
        int longest = releaseTimes[0];
        
        for(int i = 1; i < size(releaseTimes); i++){
            int time = releaseTimes[i] - releaseTimes[i-1];
            if(time > longest){
                longest = time;
                res = keysPressed[i];
            } else if (time == longest){
                res = max(res, keysPressed[i]);
            }
        }
        return res;
    }
};
