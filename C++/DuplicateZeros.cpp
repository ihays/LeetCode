  
//Ian Hays
//07-06-2020
//https://leetcode.com/problems/duplicate-zeros/
//SC: O(1) TC: O(N)

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                arr.insert(arr.begin()+i, 0);
                arr.pop_back();
                i++;
            }
        }
    }
};
