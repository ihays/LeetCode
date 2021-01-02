//Ian Hays
//01-01-2021
//https://leetcode.com/problems/check-array-formation-through-concatenation/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int,vector<int>> umap;
        
        for(int i = 0; i < pieces.size(); i++){
            umap[pieces[i][0]] = pieces[i];
        }
        int index = 0;
        while(index < arr.size()){
            bool flag = false;
            vector<int> tmp = umap[arr[index]];
            if(tmp.empty()) break;
            for(int j = 0; j < tmp.size(); j++){
                if(arr[index] == tmp[j]){
                    index++;    
                } else {
                    flag = true;
                    break;
                } 
                if(flag) break;
            }
        }
        return index == arr.size();
    }
};
