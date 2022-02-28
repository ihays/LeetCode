/***********************************************************************************************
Problem      Largest Rectangle in Histogram
Developer    Ian Hays
Date         02/27/2022
URL          https://leetcode.com/problems/largest-rectangle-in-histogram/
Space        O(N)
Time         O(N)
Description  Store the right and left local maximas to determine the area. Return largest area. 
************************************************************************************************/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = size(heights);
        vector<int> lLocalMaxima(n, 0);
        vector<int> rLocalMaxima(n, 0);
        lLocalMaxima[0] = -1;
        rLocalMaxima[n-1] = n;
        
        for(int i = 1; i < n; i++){
            int maxima = i-1;
            while(maxima >= 0 && heights[maxima] >= heights[i]){
                maxima = lLocalMaxima[maxima];
            }
            lLocalMaxima[i] = maxima;
        }
        
        for(int i = n-2; i >= 0; i--){
            int maxima = i+1;
            while(maxima < n && heights[maxima] >= heights[i]){
                maxima = rLocalMaxima[maxima];
            }
            rLocalMaxima[i] = maxima;
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            res = max(res, heights[i] * (rLocalMaxima[i] - lLocalMaxima[i] - 1));
        }
        return res;
        
    }
};
