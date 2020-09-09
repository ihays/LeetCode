//Ian Hays
//07-24-2020
//https://leetcode.com/problems/verifying-an-alien-dictionary/
//SC: O(N) TC: O(N^2)

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> umap;
        for(int i = 0; i < order.length(); i++){
            umap[order[i]] = i;
        }
        
        while(words.size() != 1){
            int index = 0;
            while(index < words[0].size() && index < words[1].size()){
                if(umap[words[0][index]] < umap[words[1][index]]) break;
                if(umap[words[0][index]] > umap[words[1][index]]) return false;
                index++;
            }
            if(index == words[0].size() || index == words[1].size()){
                if(words[0].size() > words[1].size()) return false;
            }
            words.erase(words.begin());
        }
        return true;
    }
};
