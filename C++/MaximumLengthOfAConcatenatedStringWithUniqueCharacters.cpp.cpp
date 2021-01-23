//Ian Hays
//01-23-2021
//https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    int maxLength(vector<string>& arr) {
        return dfs(arr, "", 0);
    }
    
    int dfs(vector<string>& arr, string s, int index){
        bitset<26> a;
        for(auto ch: s) a.set(ch - 'a');
        if(a.count() != s.size()) return 0;
        
        int res = s.size();
        for(int i = index; i < arr.size(); i++){
            res = max(res, dfs(arr, s + arr[i], i+1));
        }
        return res;
    }
};
