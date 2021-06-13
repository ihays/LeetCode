/***********************************************************************************************
Problem      Stone Game VII
Developer    Ian Hays
Date         06/12/2021
URL          https://leetcode.com/problems/stone-game-vii/
Space        O(N) 
Time         O(N^2)
Description  store maximized differences in dp vectors based on other player's score. 
************************************************************************************************/

class Solution {
public:
    int stoneGameVII(vector<int>& stones) {
        int n = stones.size();
        vector<int> dpPrev(n, 0);
        vector<int> dpCurr(n, 0);
        for(int i = n - 2; i >= 0; i--){
            int total = stones[i];
            dpCurr.swap(dpPrev);
            for(int j = i + 1; j < n; j++){
                total += stones[j];
                dpCurr[j] = max(total - stones[i] - dpPrev[j], total - stones[j] - dpCurr[j-1]);
            }
        }
        return dpCurr[n-1];
    }
};
