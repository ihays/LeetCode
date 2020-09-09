//Ian Hays
//09-07-20
//https://leetcode.com/problems/shuffle-string/
//SC: O(N) TC: O(N)

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        for(int i = 0; i < indices.size(); i++){
            res[indices[i]] = s[i];
        }
        return res;
    }
};
