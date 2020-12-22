//Ian Hays
//12-22-2020
//https://leetcode.com/problems/combinations/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> tmp;
        dfs(n,k,1,tmp,res);
        return res;

    }
    void dfs(int n, int k, int num, vector<int>& tmp, vector<vector<int>>& res){
        if(tmp.size() == k){
            res.push_back(tmp);
            return;
        }
        for(int i = num; i <= n; i++){
            tmp.push_back(i);
            dfs(n,k,i+1,tmp,res);
            tmp.pop_back();
        }
        return;
    }
};
