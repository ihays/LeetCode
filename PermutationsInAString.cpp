//Ian Hays
//07-28-2020
//https://leetcode.com/problems/permutation-in-string/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> set(26,0), cur(26,0);
        
        for(int i = 0; i < s1.length(); i++){
            set[s1[i]-'a']++;
        }
        
        int l = 0-s1.size();
        int r = 0;

        while(r < s2.size()){
            if(l >= 0) cur[s2[l]-'a']--;    
            cur[s2[r]-'a']++;
            l++;
            r++;
            if(cur == set) return true;
        }
        return false;
    }
};
