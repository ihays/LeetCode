//Ian Hays
//01-06-2021
//https://leetcode.com/problems/kth-missing-positive-number/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int index = 0;
        int count = 0;
        while(k > 0 && index < arr.size()){
            count++;
            if(arr[index] == count){
                index++;
            } else {
                k--;
            }
        }
        return count + k;
    }
};
