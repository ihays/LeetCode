/***********************************************************************************************
Problem      Largest Rectangle in Histogram
Developer    Ian Hays
Date         02/27/2022
URL          https://leetcode.com/problems/largest-rectangle-in-histogram/
Space        O(N)
Time         O(N)
Description  Using a stack to mark indexes of local minima/maxima to generate the largest rectangle. 
************************************************************************************************/  

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        heights.push_back(0);
        
        int res = 0;
        for(int i = 0; i < size(heights); i++){
            
            while(!s.empty() && heights[i] < heights[s.top()]){
                int height = heights[s.top()];
                s.pop();
                int ran = s.empty() ? -1 : s.top();
                res = max(res, height * (i - ran - 1));
            }
            s.push(i);
        }
        return res;
    }
};
