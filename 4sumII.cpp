
//Ian Hays
//08-26-2020
https://leetcode.com/problems/4sum-ii/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int res = 0;
        unordered_map<int,int> umap;
        
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < B.size(); j++){
                umap[A[i] + B[j]]++;
            }
        }
        for(int i = 0; i < C.size(); i++){
            for(int j = 0; j < D.size(); j++){
                int sum = -1 * (C[i] + D[j]); 
                if(umap[sum] != 0) res += umap[sum];  
            }
        }
        
        return res;
    }
};
