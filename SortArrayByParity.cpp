//Ian Hays
//07-09-2020
//https://leetcode.com/problems/sort-array-by-parity/
//SC: O(1) TC: O(N*Log(N))

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        sort(A.begin(),A.end(),[](int x, int y){
            return x%2 == 0 && y%2 == 1;  
        });
        return A;
    }
};
