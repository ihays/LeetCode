//Ian Hays
//07-26-2020
//https://leetcode.com/problems/one-edit-distance/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        if(s.size() < t.size()) s.swap(t);
        if(s.size() - t.size() > 1 || s == t) return false;
        
        int distance = 0;
        if(s.size() != t.size()){
            for(int i = 0; i + distance < s.size(); i++){
                if(s[i + distance] != t[i]){
                    distance++;
                    i--;
                }
            }
        } else {
            for(int i = 0; i < s.size(); i++){
                if(s[i] != t[i]){
                    distance++;
                }
            }
        }
        return distance == 1;
    }
};
