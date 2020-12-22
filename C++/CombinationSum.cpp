//Ian Hays
//12-22-20
//https://leetcode.com/problems/combination-sum/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        dfs(candidates, target, combination,0);
        return res;
    }
    
    void dfs(vector<int>& candidates, int target, vector<int>& combination, int start){
        if(target == 0){
            res.push_back(combination);
            return;
        }
        if(target < 0) return;
        for(int i = start; i < candidates.size(); i++){
            combination.push_back(candidates[i]);
            dfs(candidates, target-candidates[i], combination, i);
            combination.pop_back();
        }
    }
};
