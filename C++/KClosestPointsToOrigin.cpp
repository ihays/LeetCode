/***********************************************************************************************
Problem      K Closest Points to Origin
Developer    Ian Hays
Date         07/29/2021
URL          https://leetcode.com/problems/k-closest-points-to-origin/
Space        O(1) 
Time         O(N*LOG(N))
Description  Sort vector by distance from closest to largest. Return a resized vector based on k
************************************************************************************************/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),[](const vector<int>& v1, const vector<int>& v2){
           return v1[0]*v1[0]+v1[1]*v1[1] < v2[0]*v2[0]+v2[1]*v2[1];
        });
        points.resize(k);
        return points;
    }
};
