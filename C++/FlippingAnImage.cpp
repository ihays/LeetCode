/***********************************************************************************************
Problem      Flipping an Image
Developer    Ian Hays
Date         07/20/2021
URL          https://leetcode.com/problems/flipping-an-image/
Space        O(1) 
Time         O(N^2)
Description  For each row in the image, we reverse and then transform the value by toggling the 
             bit value.
************************************************************************************************/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &row: image){
            reverse(begin(row), end(row));
            transform(begin(row), end(row), begin(row), [](int val){return !val;});
        }
        return image;
    }
};
