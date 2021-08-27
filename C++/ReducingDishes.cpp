/***********************************************************************************************
Problem      Reducing Dishes
Developer    Ian Hays
Date         08/27/2021
URL          https://leetcode.com/problems/reducing-dishes/
Space        O(1)
Time         O(N*LOG(N))
Description  Sort array and then grab the cumulative sums from the ending index. We return the 
             greatest value. 
************************************************************************************************/

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(begin(satisfaction), end(satisfaction));
        int res = 0, currSum = 0, cumulativeSum = 0;
        for(int i = size(satisfaction)-1; i >= 0; i--){
            currSum += satisfaction[i];
            cumulativeSum += currSum;
            res = max(res,cumulativeSum);
        }
        return res;
    }
};
