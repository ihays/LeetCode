/***********************************************************************************************
Problem      Diet Plan Performance
Developer    Ian Hays
Date         06/06/2022
URL          https://leetcode.com/problems/diet-plan-performance/
Space        O(1) 
Time         O(N)
Description  build a window of caloric amounts in T equal to K. Evaluate whether to increase or 
             decrease points while adding/removing from T. 
************************************************************************************************/
class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int T = 0, res = 0;
        for(int i = 0; i < size(calories); i++){
            T += calories[i];
            if(i >= k-1){
                if(T < lower) res--;
                if(T > upper) res++;
                T -= calories[i-k+1];
            }   
        }
        return res;
    }
};
