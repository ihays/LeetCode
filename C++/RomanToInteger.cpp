//Ian Hays
//02-20-2021
//https://leetcode.com/problems/roman-to-integer/
//SC: O(N) TC: O(N)

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> umap({
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        });
        
        int res = 0;
        for(int i = s.length()-1; i >= 0; i--){
            res += umap[s[i]] < umap[s[i+1]] ? -umap[s[i]] : umap[s[i]];
        }
        return res;
    }
};
