//Ian Hays
//07-26-2020
//https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/
//SC: O(N) TC: O(N)

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        unordered_map<char,int> umap;
        int res = 0;
        int l = 0;
        int r = 0;
        umap[s[0]]++;
        while(r < s.size()){
            char next = s[r+1];
            char left = s[l];
            if(umap.size() <= k){
                res = max(res, r-l+1);
            } 
            if(umap.size() > k){
                umap[left]--;
                if(umap[left] == 0) umap.erase(left);
                l++;
            } else {
                umap[next]++;
                r++;
            }
        }
        return res;
    }       
};
