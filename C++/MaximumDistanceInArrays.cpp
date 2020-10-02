//Ian Hays
//10-01-2020
//https://leetcode.com/problems/maximum-distance-in-arrays/
//SC: O(N) TC: O(N)

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minDistance = 10000;
        int maxDistance = -10000;
        int res = 0;
        
        for(int i = 0; i < arrays.size(); i++){
            res = max(res,max(maxDistance - arrays[i].front(), arrays[i].back() - minDistance));
            minDistance = min(arrays[i].front(),minDistance);
            maxDistance = max(arrays[i].back(),maxDistance);
        }
        
        
        return res;
    }
};

