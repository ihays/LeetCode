/***********************************************************************************************
Problem      Find K Closest Elements
Developer    Ian Hays
Date         07/02/2021
URL          https://leetcode.com/problems/find-k-closest-elements/
Space        O(1)
Time         O(NLOG(N))
Description  We sort by distance from x, but using stable_sort ensures that our result does not
             change the relative order of values that evaluate equally. Rezising to k, and returning
             that partition of a vector sorted. 
***********************************************************************************************/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        stable_sort(begin(arr),end(arr),[x](const auto a, const auto b){
            return abs(a - x) < abs(b - x);    
        });
        arr.resize(k);
        sort(begin(arr), end(arr));
        return arr;
    }
};
