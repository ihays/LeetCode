//Ian Hays
//07-16-2020
//https://leetcode.com/problems/permutations/
//SC: O(N^2) TC: O(N^3)
//Iterative approach

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        res.push_back(nums);
        int l = 0; 
        int r = nums.size()-1;
    
        while(l < r){
            int m = res.size();
            for(int i = 0; i < m; i++){
                vector<int> tmp = res[i];
                for(int j = l+1; j < tmp.size(); j++){
                    swap(tmp[l],tmp[j]);
                    res.push_back(tmp);
                    swap(tmp[l],tmp[j]);
                }
            }
            l++;
        }    
        return res;
    }
};

