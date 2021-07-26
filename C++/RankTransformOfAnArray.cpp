/***********************************************************************************************
Problem      Rank Transform of an Array
Developer    Ian Hays
Date         07/26/2021
URL          https://leetcode.com/problems/rank-transform-of-an-array/
Space        O(N) 
Time         O(N)
Description  Sort array and then assign rank based on order storing in a map. Return result array
             with rank values. 
************************************************************************************************/

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> umap;
        vector<int> res = arr;
        sort(begin(arr), end(arr));
        int rank = 1;
        for(int i = 0; i < size(arr); i++){
            if(i+1 < size(arr) && arr[i] == arr[i+1]) continue;
            umap[arr[i]] = rank++;
        }
        for(int i = 0; i < size(res); i++) res[i] = umap[res[i]];
        return res;
    }
};
