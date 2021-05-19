/***********************************************************************************************
Problem      Intersection of Three Sorted Arrays
Developer    Ian Hays
Date         05/18/2021
URL          https://leetcode.com/problems/intersection-of-three-sorted-arrays/
Space        O(N) 
Time         O(N)
Description  Store quantities of values from arrays in a map. Quantities of 3 are an intersection
             and pushed into the result. 
************************************************************************************************/

class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        map<int,int> map;
        
        for(int i = 0; i < arr1.size(); i++){
            map[arr1[i]]++;
            map[arr2[i]]++;
            map[arr3[i]]++;
        }
        
        vector<int> res;
        for(auto it: map){
            if(it.second == 3){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
