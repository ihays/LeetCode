//Ian Hays
//07-08-2020
//https://leetcode.com/problems/remove-vowels-from-a-string/
//SC: O(N) TC: O(N)

class Solution {
public:
    string removeVowels(string S) {
        string vowels = "aeiou";
        for(int i = 0; i < S.length(); i++){
            if(vowels.find(S[i]) != string::npos){
                S.erase(S.begin()+i);
                i--;
            }
        }
        return S;
    }
};
