//Ian Hays
//07-09-2020
//https://leetcode.com/problems/reverse-words-in-a-string/
//SC: O(1) TC: O(N)
//constant memory, in place reverse words in a string.

class Solution {
public:
    string reverseWords(string s) {
        if(s.empty()) return s;
        
        //remove leading spaces
        while(!s.empty() && isspace(s[0])) s.erase(s.begin());
        reverse(s,0,s.length()-1);
        
        //remove end spaces
        while(!s.empty() && isspace(s[0])) s.erase(s.begin());
        
        //remove duplicate spaces
        for(int i = 1; i < s.length(); i++){
            if(isspace(s[i-1]) && isspace(s[i])){
                s.erase(s.begin()+i);
                i--;
            }
        }
        
        int l = 0;
        int r = s.length()-1;
        while(r != string::npos){
            r = s.find(' ',l);
            reverse(s,l,r-1);
            l = r+1;
        }  

        return s;
    }
    
    string reverse(string& s, int l, int r){
        if(r == -2) r = s.size()-1;
        while(l < r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};
