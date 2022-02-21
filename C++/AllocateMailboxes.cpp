/***********************************************************************************************
Problem      Allocate Mailboxes
Developer    Ian Hays
Date         02/21/2022
URL          https://leetcode.com/problems/allocate-mailboxes/
Space        O(N^2) 
Time         O(N^3)
Description  store the cost for each range of houses where the mailbox is located at the median
             house. Dynamically program the minimum cost of up to k mailboxes over the span of 
             i to j. 
************************************************************************************************/

class Solution {
public:
    const int INF = 1e6;
    int cost[100][100] = {};
    int memo[100][100] = {};
    
    int minDistance(vector<int>& houses, int k) {
        int n = size(houses);
        sort(begin(houses), end(houses));
        memset(memo, -1, sizeof(memo));
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int median = houses[(i+j)/2];
                for(int x = i; x <= j; x++){
                    cost[i][j] += abs(houses[x] - median);    
                }
            }
        }
        return dp(houses, n, k, 0);
    }
    
    int dp(vector<int>& houses, int n, int k, int i){
        if(k == 0 && i == n) return 0;
        if(k == 0 || i == n) return INF;
        if(memo[k][i] != -1) return memo[k][i];
        int ans = INF;
        for(int j = i; j < n; j++){
            ans = min(ans, cost[i][j] + dp(houses, n, k-1, j+1));
        }
        return memo[k][i] = ans;
    }
    
};
