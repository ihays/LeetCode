/***********************************************************************************************
Problem      Subarray Sum Equals K
Developer    Ian Hays
Date         02/10/2022
URL          https://leetcode.com/problems/subarray-sum-equals-k/
Space        O(N) 
Time         O(N)
Description  We store prefix sums in a map counting the frequency in which they occur. We determine
             how many prefix sums we can exclude to equal to k to add to our counting result. 
************************************************************************************************/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixMap;
        prefixMap[0] = 1;
        int prefixSum = 0;
        int res = 0;
        for(auto &num: nums){
            prefixSum += num;
            if(prefixMap.count(prefixSum - k)){
                res += prefixMap[prefixSum -k];
            }
            prefixMap[prefixSum]++;
        }
        return res;
    }
};
