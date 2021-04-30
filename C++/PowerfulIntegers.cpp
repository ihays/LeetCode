/***********************************************************************************************
Problem      Powerful Integers
Developer    Ian Hays
Date         04/30/2021
URL          https://leetcode.com/problems/powerful-integers/
Space        O(LOG(X) * LOG(Y)) 
Time         O(LOG(X) * LOG(Y))
Description  we store sum of x,y values which represent exponents that add up to each other as 
             long as they are less than or equal to the value of bound. Any time we see a value
             of 1, we do not want to loop further as there should only be one iteration to avoid
             infinite looping. 
************************************************************************************************/

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> uset;
    
        for(int i = 1; i <= bound; i = i * x){
            for(int j = 1; i + j <= bound; j = j * y){
                uset.insert(i + j);
                if(y == 1) break;
            }
            if(x == 1) break;
        }
        
        return vector<int>(uset.begin(), uset.end());
    }
};
