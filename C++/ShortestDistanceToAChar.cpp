//Ian Hays
//02-07-2021
//https://leetcode.com/problems/shortest-distance-to-a-character/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int index = INT_MAX;
        vector<int> res(s.length(), -1);
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == c) index = i;
            res[i] = abs(index - i);
        }
        
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == c) index = i;
            res[i] = min(res[i],abs(index - i));
        }
        
        return res;
    }
};
