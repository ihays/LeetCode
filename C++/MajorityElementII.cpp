//Ian Hays
//09-22-2020
//https://leetcode.com/problems/majority-element-ii/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> umap;
        for(auto num: nums){
            umap[num]++;
        }
        
        int limit = nums.size()/3;
        for(auto it = umap.begin(); it != umap.end(); it++){
            if(it->second > limit){
                res.push_back(it->first);
            }
        }
        
        return res;
    }
};
