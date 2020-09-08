//Ian Hays
//09-07-2020
//https://leetcode.com/problems/word-pattern/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<string,char> umap1;
        unordered_map<char,string> umap2;
        istringstream in(str);
        int i = 0;
        
        for(string tmp; in >> tmp; i++){
            if(!umap1[tmp]){
                umap1[tmp] = pattern[i];
            } else if (umap1[tmp] != pattern[i]){
                return false;
            }
            
            if(umap2[pattern[i]] == ""){
                umap2[pattern[i]] = tmp;
            } else if (umap2[pattern[i]] != tmp){
                return false;
            }
        }
        
        return i == pattern.length();
    }
};
