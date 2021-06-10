/***********************************************************************************************
Problem      Jump Game VI
Developer    Ian Hays
Date         06/09/2021
URL          https://leetcode.com/problems/jump-game-vi/
Space        O(N) 
Time         O(N)
Description  We use dynamic programming to store the max jump value using at most k steps each. 
             Usin the deque (deck back/front queue), we load visited steps. We pop from the front
             of the deque (oldest) if we are greater than k steps away. We set our dp vector to 
             the oldest (also largest) value available plus the current step. We remove from the 
             deque starting from the back (newest) values if our new current value is greater or
             equal. This ensures that the largest element remains in the front of the queue at all
             times. We return the last element in the dp vector as the result.             
************************************************************************************************/

class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        vector<int> dp(size(nums), 0);
        deque<int> q;
        q.push_back(0);
        dp[0] = nums[0];
        for(int i = 1; i < size(nums); i++){
            if(q.front() < i - k) q.pop_front();
            dp[i] = nums[i] + dp[q.front()];
            while(!q.empty() && dp[q.back()] <= dp[i]) q.pop_back();
            q.push_back(i);
        }   
        return dp[size(nums)-1];
    }
};

// turns off sync and unties in/out streams to optimize run time. 
static const auto io_sync_off = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
