//Ian Hays
//12-22-20
//https://leetcode.com/problems/combinations/
//SC: O(N^2) TC: O(N^2)

public class Solution {
    public IList<IList<int>> Combine(int n, int k) {
        IList<IList<int>> result = new List<IList<int>>();
        dfs(n,k,1,new List<int>(),result);
        return result;
    }
    
    void dfs(int n, int k, int num, IList<int> temp, IList<IList<int>> result){
        if(temp.Count == k){
            result.Add(new List<int>(temp));
            return;
        }
        for(int i = num; i <= n; i++){
            temp.Add(i);
            dfs(n,k,i+1,temp,result);
            temp.RemoveAt(temp.Count - 1);
        }
        return;
    }
}
