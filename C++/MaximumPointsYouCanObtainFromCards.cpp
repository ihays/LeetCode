/***********************************************************************************************
Problem      Maximum Points You Can Obtain From Cards
Developer    Ian Hays
Date         05/11/2021
URL          https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
Space        O(N) 
Time         O(N)
Description  Store left cards total points in stack. Remove from stack while summing the right side
             while keeping track of the maximum value to return.
************************************************************************************************/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int points = 0;
        stack<int> s;
        for(int i = 0; i < k; i++){
            s.push(cardPoints[i]);
            points += cardPoints[i];
        }
        
        int res = points;
        
        for(int i = cardPoints.size()-1; !s.empty(); i--){
            points -= s.top();
            s.pop();
            points += cardPoints[i];
            res = max(res, points);
        }
        
        return res;
    }
};
