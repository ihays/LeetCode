//Ian Hays
//02-16-2021
//https://leetcode.com/problems/letter-case-permutation/
//SC: O(N^2) TC: O(N^2)

public class Solution {
    public IList<string> LetterCasePermutation(string S) {
        IList<string> result = new List<string>();
        S = S.ToLower();
        dfs(S.ToCharArray(),0,result);
        return result;
    }
    
    void dfs(char[] S, int index, IList<string> result){
        result.Add(new string(S));
        if(index == S.Length) return;
        for(int i = index; i < S.Length; i++){
            if(char.IsUpper(S[i]) || char.IsNumber(S[i])) continue;
            S[i] = char.ToUpper(S[i]);
            dfs(S,i+1,result);
            S[i] = char.ToLower(S[i]);
        }
    }
}
