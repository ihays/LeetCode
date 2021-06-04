/***********************************************************************************************
Problem      Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
Developer    Ian Hays
Date         06/02/2021
URL          https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
Space        O(N) 
Time         O(N)
Description  Find the maximum difference in sorted order for each the horizontal and vertical slices.
             return the product of both multiplied by the mod to prevent overflow. 
************************************************************************************************/

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int height = max(verticalCuts[0], w - verticalCuts.back());
        int width = max(horizontalCuts[0], h - horizontalCuts.back());
        for(int i = 1; i < verticalCuts.size(); i++){
            height = max(height,verticalCuts[i]-verticalCuts[i-1]);
        }
        for(int i = 1; i < horizontalCuts.size(); i++){
            width = max(width,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        return (long)height * width % 1000000007;
    }
};
