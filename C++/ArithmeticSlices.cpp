//Ian Hays
//02-18-2021
//https://leetcode.com/problems/arithmetic-slices/
//SC: O(1) TC: O(N)

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size() < 3) return 0;
        int res = 0, curr = 1;
        for(int i = 1; i < A.size()-1; i++){
            if(A[i]-A[i-1] == A[i+1]-A[i]) res+= curr++;
            else curr = 1;
        }
        return res;
    }
};
