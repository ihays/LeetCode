//Ian Hays
//12-17-20
//https://leetcode.com/problems/substring-with-concatenation-of-all-words/
//SC: O(N) TC: O(N^2)

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        unordered_map<string,int> umap;
        for(auto str : words){
            umap[str]++;
        }
        
        int length = words[0].size();
        int numOfWords = words.size();
        
        for(int i = 0; i < s.size() - numOfWords * length + 1; i++){
            unordered_map<string,int> seen;
            int j = 0;
            for(;j < numOfWords; j++){
                string word = s.substr(i + j * length, length);
                if(umap.find(word) != umap.end()){
                    seen[word]++;
                    if(seen[word] > umap[word]){
                        break;
                    }
                } else break;
            }
            if(numOfWords ==  j) res.push_back(i);
        }
        return res;
    }
};
