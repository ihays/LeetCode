/***********************************************************************************************
Problem      Valid Mountain Array
Developer    Ian Hays
Date         11/08/2021
URL          https://leetcode.com/problems/valid-mountain-array/
Space        O(1) 
Time         O(N) 
Description  While going up, verify value at lesser index is less than value at greater index. Vice
             versa when going down. 
************************************************************************************************/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() > 1 && arr[0] > arr[1] || arr.size() == 1) return false;
        bool up = true;
        int index = 1;
        while(index < size(arr)){
            if(up){
                if(arr[index-1] < arr[index]) index++;
                else up = false; 
            } else {
                if(arr[index-1] > arr[index]) index++;
                else return false;
            }
        }
        return !up;
    }
};
