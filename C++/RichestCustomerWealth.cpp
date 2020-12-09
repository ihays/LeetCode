//Ian Hays
//12-08-20
//https://leetcode.com/problems/richest-customer-wealth/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int wealth = 0;
        
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[i].size(); j++){
                wealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, wealth);
            wealth = 0;
        }
        return maxWealth;
    }
};
