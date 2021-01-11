//Ian Hays
//01-10-2021
//https://leetcode.com/problems/create-sorted-array-through-instructions/
//SC: O(N) TC: O(N^2) TLE

class Solution {
public:
    int createSortedArray(vector<int>& instructions) {
        vector<int> nums;
        unordered_map<int,int> duplicates;
        int res = 0;
        for(int i = 0; i < instructions.size(); i++){
            int index = binarySearchInsert(0,nums.size(),instructions[i],nums);
            nums.insert(nums.begin() + index, instructions[i]);
            int high = nums.size()-1-index-duplicates[instructions[i]];
            res += min(index,high);
            res %= (int)1e9 + 7;
            duplicates[instructions[i]]++;
        }
        return res;
       
    }
    int binarySearchInsert(int l, int r, int target, vector<int>& nums){
        while(l < r){
            int m = l + (r-l)/2;
            if(target <= nums[m]){
                r = m;
            } else {
                l = m+1;
            }
        }
        return l;
    }
};
