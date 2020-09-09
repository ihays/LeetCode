//Ian Hays
//07-09-2020
//https://leetcode.com/problems/reverse-words-in-a-string-ii/
//SC: O(1) TC: O(N)
//constant memory, in place reverse words in a string.

class Solution {
public:
    void reverseWords(vector<char>& s) {
        if(s.empty()) return;
        
        //remove leading spaces
        while(!s.empty() && isspace(s[0])) s.erase(s.begin());
        reverse(s,0,s.size()-1);
        
        //remove end spaces
        while(!s.empty() && isspace(s[0])) s.erase(s.begin());
        
        //remove duplicate spaces
        for(int i = 1; i < s.size(); i++){
            if(isspace(s[i-1]) && isspace(s[i])){
                s.erase(s.begin()+i);
                i--;
            }
        }
        
        int l = 0;
        int r = 0;
        while(r < s.size()){
            r = l;
            while(r < s.size() && s[r] != ' ') r++;
            reverse(s,l,r-1);
            l = r+1;
        }  
    }
    
    void reverse(vector<char>& s, int l, int r){
        while(l < r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
};
