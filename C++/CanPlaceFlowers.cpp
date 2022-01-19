/***********************************************************************************************
Problem      Can Place Flowers
Developer    Ian Hays
Date         01/18/2021
URL          https://leetcode.com/problems/can-place-flowers/
Space        O(1) 
Time         O(N)
Description  iterating through flowerbed, we place flowers in qaulifying spots. Return true if the
             number of qualifying spots exceeds n. 
************************************************************************************************/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(size(flowerbed) == 1) return !flowerbed[0] >= n;
        int res = 0;
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            res++;
        }
        for(int i = 1; i < size(flowerbed)-1; i++){
            if(flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                res++;
            }
        }
        if(flowerbed[size(flowerbed)-1] == 0 && flowerbed[size(flowerbed)-2] == 0){
            flowerbed[0] = 1;
            res++;
        }
        return res >= n;
    }
};
