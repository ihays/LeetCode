//Ian Hays
//07-28-2020
//https://leetcode.com/problems/interval-list-intersections/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> res;
        int i = 0, j = 0;
        while(i < A.size() && j < B.size()){
            int start = max(A[i][0],B[j][0]);
            int end   = min(A[i][1],B[j][1]);
            if(A[i][1] > B[j][1]){
                j++;
            } else {
                i++;
            }    
            if(start <= end) res.push_back({start,end});
        }
        return res;
    }
};
