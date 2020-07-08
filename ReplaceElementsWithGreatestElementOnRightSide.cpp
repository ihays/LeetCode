//Ian Hays
//07-07-2020
//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
//SC: O(1) TC: O(N)
//use of exchange(arr[n],currMax): returns arr[n], and then currMax to arr[n] (arr[n] = currMax).

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int currMax = -1;
        while(n--) {
            currMax = max(currMax, exchange(arr[n],currMax));
        }
        return arr;
    }

};
