//Ian Hays
//01-22-2021
//https://leetcode.com/problems/determine-if-two-strings-are-close/
//SC: O(N) TC: O(N)

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        unordered_map<char,int> umap1;
        unordered_map<char,int> umap2;
        
        for(int i = 0; i < word1.size(); i++){
            umap1[word1[i]]++;
            umap2[word2[i]]++;
        }
        multiset<char> ms1;
        multiset<int> ms2;
        for(auto it = umap1.begin(); it != umap1.end(); it++){
            ms1.insert(it->first);
            ms2.insert(it->second);
            
        }
        for(auto it = umap2.begin(); it != umap2.end(); it++){
            auto iter1 = ms1.find(it->first);
            auto iter2 = ms2.find(it->second);
            if(iter1 == ms1.end() || iter2 == ms2.end()) return false;
            ms1.erase(iter1);
            ms2.erase(iter2);
        }
        return ms1.empty() && ms2.empty();
    }
};
