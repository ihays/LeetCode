//Ian Hays
//01-03-2021
//https://leetcode.com/problems/minimum-time-visiting-all-points/
//SC: O(1) TC: O(N)

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;
        for(int i = 1; i < points.size(); i++){
            int x = abs(points[i][0] - points[i-1][0]);
            int y = abs(points[i][1] - points[i-1][1]);
            res += max(x,y);
        }
        return res;
    }
};
