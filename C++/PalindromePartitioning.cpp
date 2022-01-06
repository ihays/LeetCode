/***********************************************************************************************
Problem      Palindrome Partitioning
Developer    Ian Hays
Date         01/06/2021
URL          https://leetcode.com/problems/palindrome-partitioning/
Space        O(N) 
Time         O(N)
Description  dfs through partition palindrome combinations and pushing results.
************************************************************************************************/


class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
        vector<string> path;
        dfs(path, s, 0);
        return res;
    }
    
    void dfs(vector<string>& path, string& s, int index){
        if(index == s.size()) res.push_back(path);
        if(index < s.size()){
            for(int i = index; i < s.size(); i++){
                string candidate = s.substr(index, i-index+1);
                if(isPalindrome(0, i-index, candidate)){
                    path.push_back(candidate);
                    dfs(path, s, i+1);
                    path.pop_back();
                }
            }
        }
        return;
    }
    
    bool isPalindrome(int l, int r, string word){
        while(l < r){
            if(word[l] != word[r]) return false;
            l++; 
            r--;
        }
        return true;
    }
};
