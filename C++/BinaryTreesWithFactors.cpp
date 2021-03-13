/***********************************************************************************************
Problem      Binary Trees With Factors
Developer    Ian Hays
Date         03/13/2021
URL          https://leetcode.com/problems/binary-trees-with-factors/
Space        O(N) 
Time         O(N^2)
Description  Dynamic Programming. We save the subproblem of the amount of binary trees in an map
************************************************************************************************/

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        unordered_map<int,long> dp;
        long res = 0, mod = 1e9+7;
        sort(arr.begin(),arr.end());
        for(int i = 0; i < arr.size(); i++){
            dp[arr[i]] = 1;
            for(int j = 0; j < i; j++){
                if(arr[i] % arr[j] == 0){
                    dp[arr[i]] = (dp[arr[i]] + dp[arr[j]] * dp[arr[i] / arr[j]]) % mod;
                }
            }
            res = (res + dp[arr[i]]) % mod;
        }
        return res;
        
    }
};
