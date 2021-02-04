//Ian Hays
//02-04-2021
//https://leetcode.com/problems/longest-harmonious-subsequence/
//SC: O(N) TC: O(N)

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto num: nums) 
            umap[num]++;
        
        int res = 0;
        for(auto [num, freq] : umap){
            if(umap.find(num+1) != umap.end())
                res = max(res, freq + umap.at(num+1));
        }
        return res;
    }
};
