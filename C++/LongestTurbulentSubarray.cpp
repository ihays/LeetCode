/***********************************************************************************************
Problem      Longest Turbulent Subarray
Developer    Ian Hays
Date         09/15/2021
URL          https://leetcode.com/problems/longest-turbulent-subarray/
Space        O(1) 
Time         O(N)
Description  We check for switching turbulance and increment a counter. If there is no switching,
             we reset to 1 or 2 depending if the two are equal or not. We return the longest 
             counter represinting subarray size. 
************************************************************************************************/

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int count = 0;
        int res = 0;
        for(int i = 0; i < size(arr); i++){
            if(i >= 2 && (arr[i-1] < arr[i-2]  && arr[i] > arr[i-1] || arr[i-1] > arr[i-2] && arr[i] < arr[i-1])){
                count++;
            } else {
               count = i >= 1  && arr[i] != arr[i-1] ? 2 : 1; 
            }
            res = max(res, count);
        }
        return res;
    }
};
