//Ian Hays
//06-29-2020
//https://leetcode.com/problems/unique-paths/
//SC: O(1) TC: O(M*N)
//Bruteforce DFS Recursion

class Solution {
public:
    int uniquePaths(int m, int n) {
        int res = 0;
        if(m==1&&n==1) return 1;
        if(m > 0) res += uniquePaths(m-1,n);
        if(n > 0) res += uniquePaths(m,n-1);    
        return res;
    }
};
