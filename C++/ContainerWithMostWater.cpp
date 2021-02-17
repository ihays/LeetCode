//Ian Hays
//02-17-2021
//https://leetcode.com/problems/container-with-most-water/
//SC: O(1) TC: O(N)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int res = 0;
        
        while(l < r){
            res = max(res, min(height[l],height[r]) * (r-l));
            if(height[l] < height[r]) l++;
            else r--;
        }
        return res;
    }
};
