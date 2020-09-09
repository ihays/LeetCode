//Ian Hays
//07-11-2020
//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mostCandies = 0;
        vector<bool> res;
        for(int i = 0; i < candies.size(); i++){
            mostCandies = max(mostCandies,candies[i]);
        }
        
        for(int i = 0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= mostCandies){
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        
        return res;
    }
};
