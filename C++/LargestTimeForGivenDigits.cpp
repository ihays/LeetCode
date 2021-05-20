/***********************************************************************************************
Problem      Largest Time For Given Digits
Developer    Ian Hays
Date         05/20/2021
URL          https://leetcode.com/problems/largest-time-for-given-digits/
Space        O(1) 
Time         O(N!)
Description  We find previous permutation from largest value of input array until one passes the
             "time" check (hours are less than 24, minutes less than 60).
************************************************************************************************/

class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), greater<int>());
        
        do{
            if(arr[0]*10 + arr[1] < 24 && arr[2]*10 + arr[3] < 60)           
                return to_string(arr[0]) + to_string(arr[1]) + ":" + to_string(arr[2]) + to_string(arr[3]);
        }while(prev_permutation(arr.begin(),arr.end()));
        
        return "";
    }
};
