/***********************************************************************************************
Problem      Advantage Shuffle
Developer    Ian Hays
Date         03/24/2021
URL          https://leetcode.com/problems/advantage-shuffle/
Space        O(N) 
Time         O(N)
Description  Build a map that maps original position of B. Sort both A and B, and build an advantage
             array that places advantages first, and then disadvantages at the end. Remap the advantage
             matrix to positions of B and return. 
************************************************************************************************/

class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        unordered_map<int,vector<int>> umap;
        for(int i = 0; i < B.size(); i++){
            umap[B[i]].push_back(i);
        }
        
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        vector<int> disadvantage;
        vector<int> advantage;
        int index = 0;
        for(int i = 0; i < A.size(); i++){
            if(A[i] > B[index]){
                advantage.push_back(A[i]);
                index++;
            } else {
                disadvantage.push_back(A[i]);
            }
        }
        advantage.insert(advantage.end(),disadvantage.begin(),disadvantage.end());
        
        vector<int> res(B.size(), 0);
        
        for(int i = 0; i < B.size(); i++){
            res[umap[B[i]].back()] = advantage[i];
            umap[B[i]].pop_back();
        }
        
        return res;
    }
};
