//Ian Hays
//12-22-20
//https://leetcode.com/problems/combination-sum/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combination;
        sort(candidates.begin(), candidates.end());
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
            if(i != start && i != 0 && candidates[i] == candidates[i-1]) continue;
            combination.push_back(candidates[i]);
            dfs(candidates, target-candidates[i], combination, i+1);
            combination.pop_back();
        }
    }
};
