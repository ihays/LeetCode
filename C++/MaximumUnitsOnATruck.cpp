/***********************************************************************************************
Problem      Maximum Units On a Truck
Developer    Ian Hays
Date         06/14/2021
URL          https://leetcode.com/problems/maximum-units-on-a-truck/
Space        O(N) 
Time         O(N)
Description  We store number of boxes for each for each unit amount into an array. We subtract
             quantity of boxes of the greatest unit size from truckSize until we reach zero or
             all box types have been evaluated while incrementing the result.
************************************************************************************************/

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int boxes[1001] = {};
        set<int, greater<int>> units;
        
        for(auto &boxType: boxTypes){
            boxes[boxType[1]] += boxType[0];
            if(!units.count(boxType[1])){
                 units.insert(boxType[1]);
            }
        }
        
        int res = 0;
        for(auto &bucket: units){
            int size =  min(truckSize,boxes[bucket]);
            res += size * bucket;
            truckSize -= size;
            if(!truckSize) break;
        }
        
        return res;
    }
};
