/***********************************************************************************************
Problem      Custom Sort String
Developer    Ian Hays
Date         07/14/2021
URL          https://leetcode.com/problems/custom-sort-string/
Space        O(N)
Time         O(N*LOG(N))
Description  We use a map to track the index locations of the order. Using the map in a lambda function
             we sort based on order and return.
************************************************************************************************/

class Solution {
public:
    string customSortString(string order, string str) {
        unordered_map<char,int> umap;
        for(int i = 0; i < order.size(); i++) umap[order[i]] = i;
        sort(str.begin(), str.end(), [&](const char& a, const char& b){
            return umap[a] < umap[b];            
        });
        return str;
    }
};
