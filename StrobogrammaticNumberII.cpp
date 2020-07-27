//Ian Hays
//07-27-2020
//https://leetcode.com/problems/strobogrammatic-number-ii/
//SC: O(N!) TC: O(N!) - we are finding number of permutations of n

class Solution {
public:
    vector<string> init = {"1", "0", "8", ""};
    vector<string> nums = {"11","00","88","96","69"};
    
    vector<string> findStrobogrammatic(int n) {
        vector<string> res;
        for(string num: init){
            helper(n,num,res);
        }
        return res;
    }
    
    void helper(int& n, string s, vector<string>& res){
        if(s.size() == n){
            if(s[0] != '0' || n == 1) res.push_back(s);    
            return;
        } 
        if(s.size() < n-1){
            for(string num: nums){
                helper(n,num[0] + s + num[1],res);
            }
        }
        return; 
    }
};
