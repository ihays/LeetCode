//Ian Hays
//07-24-2020
//https://leetcode.com/problems/merge-intervals/
//SC: O(N) TC: O(N*LOG(N))

class Solution {
public:    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return intervals;
        sort(intervals.begin(),intervals.end(),[](vector<int>& v1, vector<int>& v2){
            return v1[0] < v2[0];
        });
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            if(res.back()[1] >= intervals[i][0]){
                if(res.back()[1] < intervals[i][1]){
                    res.back()[1] = intervals[i][1];
                }
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
