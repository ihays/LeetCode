/***********************************************************************************************
Problem      Distribute Candies
Developer    Ian Hays
Date         03/01/2021
URL          https://leetcode.com/problems/distribute-candies/
Space        O(N) 
Time         O(N)
Description  Use bitset (instead of set, bitset uses continuous storage and faster to use) to 
             determine number of types of candies. we set size to 200001 since the range of inputs 
             is 10E-5 to 10E+5, this is 100000 + 100000 + 1(median value of 0). We return the
             minimum value between the count of the bitset and the number of candies / 2. 
************************************************************************************************/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        bitset<200001> bset;
        for(auto it: candyType) bset.set(it+100000);
        return min(bset.count(), candyType.size()/2);
    }
};
