//Ian Hays
//07-10-2020
//https://leetcode.com/problems/isomorphic-strings/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> umap;
        
        for(int i = 0; i < s.size(); i++){
            if(umap.find(s[i]) == umap.end()){
                umap[s[i]] = t[i];
            } else if (umap[s[i]] != t[i]){
                return false;
            }
        }
        umap.clear();
        for(int i = 0; i < s.size(); i++){
            if(umap.find(t[i]) == umap.end()){
                umap[t[i]] = s[i];
            } else if (umap[t[i]] != s[i]){
                return false;
            }
        }
        
        return true;
    }
};
