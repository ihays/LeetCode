//Ian Hays
//02-22-2021
//https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/
//SC: O(N) TC: O(N^2)

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string res;
        for(int i = 0; i < d.size(); i++){
            string candidate = d[i];
            int index = 0;
            for(auto ch: s){
                if(index < candidate.size() && candidate[index] == ch) index++;
            }
            if(index == candidate.size()){
                if(candidate.size() > res.size()){
                    res = candidate;
                } else if(candidate.size() == res.size()){
                    res = candidate < res ? candidate : res;
                }
            }
        }
        return res;
    }
};
