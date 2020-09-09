//Ian Hays
//08-11-2020
//https://leetcode.com/problems/reverse-vowels-of-a-string/
//SC: O(N) TC: O(1)

class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length()-1;
        string vowels = "aeiouAEIOU";
        
        while(l < r){
            int left = vowels.find(s[l]);
            int right = vowels.find(s[r]);
            if(left != string::npos && right != string::npos){
                swap(s[l],s[r]);
                l++;
                r--;
            } else {
                l += left == string::npos ? 1 : 0;
                r -= right == string::npos ? 1 : 0;
            }
        }
        return s;
    }
};
