//Ian Hays
//07-09-2020
//https://leetcode.com/problems/squares-of-a-sorted-array/
//SC: O(1) TC: O(N*Log(N))

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i = 0; i < A.size(); i++){
            A[i]*=A[i];
        }
        sort(A.begin(),A.end());
        return A;
    }
};
