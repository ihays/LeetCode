//Ian Hays
//07-12-2020
//https://leetcode.com/problems/intersection-of-three-sorted-arrays/
//SC: O(1) TC: O(N)

class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        unordered_map<int,int> umap;
        vector<int> res;
        
        for(int i = 0; i < arr1.size(); i++){
            umap[arr1[i]]++;
            umap[arr2[i]]++;
            umap[arr3[i]]++;
        }
        
        for(int i = 0; i < arr1.size(); i++){
            if(umap[arr1[i]] == 3){
                res.push_back(arr1[i]);
            }
        }
        return res;
    }
};
