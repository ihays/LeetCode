//Ian Hays
//02-16-2021
//https://leetcode.com/problems/letter-case-permutation/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        transform(S.begin(), S.end(), S.begin(), ::tolower);
        dfs(S,0,res);
        return res;
    }
    
    void dfs(string& S, int index, vector<string>& res){
        res.push_back(S);
        if(index == S.length()) return;
        for(int i = index; i < S.size(); i++){
            if(isupper(S[i]) || isdigit(S[i])) continue;
            S[i] = toupper(S[i]);
            dfs(S,i+1,res);
            S[i] = tolower(S[i]);
        }
    }
};
