//Ian Hays
//07-07-2020
//https://leetcode.com/problems/check-if-n-and-its-double-exist/
//SC: O(N) TC: O(N)
//HashMap: add half and double values to HashMap for each element in the array. Check if future elements are in HashMap and return true.

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> umap;
        for(int i = 0; i < arr.size(); i++){
            if(umap[arr[i]]) return true;
            if(arr[i]%2 == 0) umap[arr[i]/2]++;
            umap[arr[i]*2]++;

        }
        return false;        
    }
};
