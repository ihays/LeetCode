//Ian Hays
//02-15-2021
//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
//SC: O(N) TC: O(N^2)

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<array<int,2>> soldiers;
        for(int i = 0; i < mat.size(); i++){
            int count = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1)
                    count++;
                else
                    break;
            }
            soldiers.push_back({i, count});
        }
        auto comp = [](array<int,2> a, array<int,2> b) { return a[1] == b[1] ? a[0] < b[0] : a[1] < b[1];};
        sort(soldiers.begin(), soldiers.end(), comp);
        vector<int> res;
        for(int i = 0; i < k; i++) res.push_back(soldiers[i][0]);
        return res;
    }
};
