/***********************************************************************************************
Problem      Kth Distinct String in an Array
Developer    Ian Hays
Date         11/07/2021
URL          https://leetcode.com/problems/kth-distinct-string-in-an-array/
Space        O(N) 
Time         O(N) 
Description  Store frequency of strings in vector array. Return the kth distinct string when revisiting
             the vector in order. 
************************************************************************************************/

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> umap;
        for(auto a: arr) umap[a]++;
        for(int i = 0; i < size(arr); i++){
            if(umap[arr[i]] == 1 && --k == 0) return arr[i];
        }
        return "";
    }
};
