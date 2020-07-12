  
//Ian Hays
//07-11-2020
//https://leetcode.com/problems/xor-operation-in-an-array/
//SC: O(N) TC: O(N)

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        for(int i = 0; i < n; i++){
            nums.push_back(start + 2*i);
        }
        
        for(int i = 1; i < nums.size(); i++){
            nums[0] ^= nums[i];
        }
        
        return nums[0];
    }
};
