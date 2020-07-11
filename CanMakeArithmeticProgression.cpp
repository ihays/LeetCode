//Ian Hays
//07-10-2020
//https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
//SC: O(1) TC: O(N*Log(N))

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() < 3) return true;
        sort(arr.begin(),arr.end());
        int diff = arr[1] - arr[0];
        for(int i = 2; i < arr.size(); i++){
            if(diff != arr[i] - arr[i-1]) return false;
            diff = arr[i] - arr[i-1];
        }
        return true;
    }
};
