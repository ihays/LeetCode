/***********************************************************************************************
Problem      Reduce Array Size to The Half
Developer    Ian Hays
Date         07/06/2021
URL          https://leetcode.com/problems/reduce-array-size-to-the-half/
Space        O(N)
Time         O(NLOG(N))
Description  We push frequency values into a vector sorted in decreasing order. We remove from 
             the size of the vector each frequency until it is half or less. We return the set 
             amount of numbers removed. 
***********************************************************************************************/

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> umap;
        for(auto val: arr) umap[val]++;
        vector<int> freq;
        for(auto [_,f]: umap) freq.push_back(f); 
        int size = arr.size(), half = arr.size()/2, index = 0, res = 0;
        sort(freq.begin(), freq.end(), greater<int>());
        for(;size > half; res++) size -= freq[index++];
        return res;
    }
