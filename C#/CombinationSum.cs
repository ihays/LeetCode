//Ian Hays
//12-22-20
//https://leetcode.com/problems/combination-sum/
//SC: O(N^2) TC: O(N^2)

public class Solution {
    public IList<IList<int>> CombinationSum(int[] candidates, int target) {
        IList<IList<int>> result = new List<IList<int>>();
        List<int> combination = new List<int>();
        dfs(ref result, candidates, target, ref combination, 0);
        return result;
    }
    
    void dfs(ref IList<IList<int>> result, int[] candidates, int target, ref List<int> combination, int start){
        if(target == 0){
            result.Add(new List<int>(combination));
            return;
        }
        if(target < 0) return;
        for(int i = start; i < candidates.Length; i++){
            combination.Add(candidates[i]);
            dfs(ref result, candidates, target-candidates[i], ref combination, i);
            combination.RemoveAt(combination.Count - 1);
        }
    }
}
