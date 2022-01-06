/***********************************************************************************************
Problem      Car Pooling
Developer    Ian Hays
Date         1/5/2022
URL          https://leetcode.com/problems/car-pooling/
Space        O(N)
Time         O(N)
Description  Store distances in a map, and record the maximum number of seats needed. If the number
             of seats needed exceeds the capacity, return false, otherwise return true. 
************************************************************************************************/

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        unordered_map<int,int> umap;
        int maximum = 0;
        for(auto trip: trips){
            int from = trip[1];
            int to = trip[2];
            for(int i = from; i < to; i++){
                umap[i] += trip[0];
                maximum = max(umap[i], maximum);
                if(maximum > capacity) return false;
            }
        }
        return true;
    }
};
