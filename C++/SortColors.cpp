/***********************************************************************************************
Problem      132 Pattern
Developer    Ian Hays
Date         10/26/21
URL          https://leetcode.com/problems/sort-colors/
Space        O(1) 
Time         O(N)
Description  We track the frequency of colors in an array and then push them back into a cleared
             input vector to return the result.
************************************************************************************************/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colors[3] = {};
        for(int num: nums) colors[num]++;
        nums.clear();
        for(int i = 0; i < 3; i++){
            while(colors[i]--){
                nums.push_back(i);
            }
        }
    }
};
