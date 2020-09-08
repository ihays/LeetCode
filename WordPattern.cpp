//Ian Hays
//09-07-2020
//https://leetcode.com/problems/word-pattern/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<string,char> umap1;
        unordered_map<char,string> umap2;
        int begin = 0;
        int end = 0;
        for(int i = 0; i < pattern.length(); i++){
            end = str.find(' ', begin);
            string tmp = str.substr(begin,end-begin);
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
            begin = end + 1;
        }
        if(end != string::npos) return false;
        return true;
    }
};
