//Ian Hays
//07-19-2020
//https://leetcode.com/problems/sort-colors/
//SC: O(1) TC: O(N)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int counter[3] = {0,0,0};
        for(auto num: nums){
            counter[num]++;
        }
        nums.clear();
        for(int i = 0; i < 3; i++){
            while(counter[i]--){
                nums.push_back(i);
            }
        }        
    }
};
