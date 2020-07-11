//Ian Hays
//07-10-2020
//https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/
//SC: O(1) TC: O(N)

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int largest = 0;
        for(int i = 0; i < left.size(); i++){
            largest = max(largest,left[i]);
        }
        for(int i = 0; i < right.size(); i++){
            largest = max(largest,n-right[i]);
        }
        return largest;
    }
};
