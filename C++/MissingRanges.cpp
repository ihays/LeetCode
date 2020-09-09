//Ian Hays
//07-05-2020
//https://leetcode.com/problems/missing-ranges/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> res;
        for(int i = 0; i < nums.size(); i++){
            //skip duplicate numbers
            while(i+1 < nums.size() && nums[i] == nums[i+1]){
                i++;
            }
            if(lower != nums[i]){
                res.push_back(to_string(lower));
                lower++;
                if(lower != nums[i]){
                    res.back() += "->" + to_string(nums[i]-1);
                    lower = nums[i];
                }
            }
            if(lower != INT_MAX) lower++;
        }
        if(lower < upper){
            res.push_back(to_string(lower) + "->" + to_string(upper));
        } else if (lower == upper && lower != INT_MAX){
            res.push_back(to_string(lower));
        }
        return res;
    }
};
