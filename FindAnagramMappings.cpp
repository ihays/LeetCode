//Ian Hays
//07-12-2020
//https://leetcode.com/problems/find-anagram-mappings/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> umap;
        vector<int> res;
        
        for(int i = 0; i < B.size(); i++){
            umap[B[i]] = i;
        }
        
        for(int i = 0; i < A.size(); i++){
            res.push_back(umap[A[i]]);
        }
        
        return res;
    }
};
