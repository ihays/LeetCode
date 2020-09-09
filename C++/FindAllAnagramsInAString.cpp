//Ian Hays
//07-28-2020
//https://leetcode.com/problems/find-all-anagrams-in-a-string/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res,set(26,0), cur(26,0);
        
        for(int i = 0; i < p.length(); i++){
            set[p[i]-'a']++;
        }
        
        int l = 0-p.size();
        int r = 0;

        while(r < s.size()){
            if(l >= 0) cur[s[l]-'a']--;    
            cur[s[r]-'a']++;
            l++;
            r++;
            if(cur == set) res.push_back(l);
        }
        return res;
    }
};
