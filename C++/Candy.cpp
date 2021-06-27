/***********************************************************************************************
Problem      Candy
Developer    Ian Hays
Date         06/27/2021
URL          https://leetcode.com/problems/candy/
Space        O(N)
Time         O(N)
Description  We iterate forward through candies increasing the previous value by 1 for the current
             value if it's rating is greater. Then we iterate backward grabbing the max of our 
             current value plus one, and its previous value if its greater. Accumulate the results.
************************************************************************************************/

class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies(size(ratings), 1);
        for(int i = 1; i < size(candies); i++)
            if(ratings[i] > ratings[i-1]) 
                candies[i] = candies[i-1]+1;   
        for(int i = size(candies)-1; i > 0; i--)
            if(ratings[i-1] > ratings[i]) 
                candies[i-1] = max(candies[i]+1,candies[i-1]); 
        return accumulate(begin(candies), end(candies), 0);
    }
};



