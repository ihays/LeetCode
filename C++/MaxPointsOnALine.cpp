/***********************************************************************************************
Problem      Max Points on A Line
Developer    Ian Hays
Date         03/05/2022
URL          https://leetcode.com/problems/max-points-on-a-line/
Space        O(1) 
Time         O(N^2)
Description  Store slopes into a map of frequency, and return the maximum group of points with
             same slope
************************************************************************************************/

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        const int inf = INT_MAX;
        int res = 0;
        for(int i = 0; i < size(points); i++){
            int samePoint = 1, maxPoints = 0;
            unordered_map<double, int> slopeFrq;
            for(int j = i+1; j < size(points); j++){
                if(points[i][0] == points[j][0] && points[i][1] == points[j][1]){
                    samePoint++;
                } else if (points[i][1] == points[j][1]){
                    slopeFrq[inf]++;
                } else {
                    double slope = (double)(points[j][0]-points[i][0])/(points[j][1]-points[i][1]);
                    slopeFrq[slope]++;
                }
            }
            
            for(auto it = slopeFrq.begin(); it != slopeFrq.end(); it++){
                maxPoints = max(it->second, maxPoints);
            }
            maxPoints += samePoint;
            
            res = max(maxPoints, res);
        }
        return res;
    }
};
