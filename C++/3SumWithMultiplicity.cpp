/***********************************************************************************************
Problem      3Sum With Multiplicity
Developer    Ian Hays
Date         03/23/2021
URL          https://leetcode.com/problems/3sum-with-multiplicity/
Space        O(1) 
Time         O(N^2)
Description  Store quantities of 2Sum in map as we evaluate the 3Sum             
************************************************************************************************/


class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int map[301] = {0};
        int mod = 1e9+7;
        int res = 0;
        for(int i = 0; i < arr.size(); i++){
            if(target - arr[i] >= 0) res = (res + map[target-arr[i]]) % mod;
            for(int j = 0; j < i; j++){
                map[arr[i]+arr[j]]++;
            }
        }
        return res;
    }
};
