//Ian Hays
//07-14-2020
//https://leetcode.com/problems/largest-perimeter-triangle/
//SC: O(1) TC: O(NLOG(N))

class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(),A.end(),greater<int>());
        for(int i = 2; i < A.size(); i++){
            if(A[i-2] < A[i-1] + A[i]){
                return A[i-2] + A[i-1] + A[i];
            }
        }
        return 0;
    }
};
