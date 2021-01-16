//Ian Hays
//01-16-2021
//https://leetcode.com/problems/find-anagram-mappings/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> res;
        unordered_map<int,int> umap;
        for(int i = 0; i < B.size(); i++) umap[B[i]] = i;
        for(auto &it: A) res.push_back(umap[it]);
        return res;
    }
};
