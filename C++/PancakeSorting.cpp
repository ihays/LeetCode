/***********************************************************************************************
Problem      Pancake Sorting
Developer    Ian Hays
Date         05/26/2021
URL          https://leetcode.com/problems/pancake-sorting/
Space        O(N) 
Time         O(N)
Description  Continuously move largest element to end by moving nth (0 <= n <= arr.size()) largest 
             element to beginning of array, and then reverse whole array - n to get the largest element 
             in place.
************************************************************************************************/

class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        for(int i = 0; i < arr.size(); i++){
            auto maxElement = max_element(begin(arr), end(arr) - i);
            res.push_back(maxElement - begin(arr) + 1);
            res.push_back(arr.size() - i);
            reverse(begin(arr), maxElement + 1);
            reverse(begin(arr), end(arr) - i);
        }
        return res;
    }
};
