//Ian Hays
//01-09-2021
//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
//SC: O(1) TC: O(N)

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int index1 = 0;
        int char1 = 0;
        int index2 = 0;
        int char2 = 0;
        
        while(index1 < word1.size() && index2 < word2.size()){
            if(word1[index1][char1] != word2[index2][char2]){
                return false;   
            } else {
                if(char1 < word1[index1].size()-1){
                    char1++;
                } else {
                    index1++;
                    char1 = 0;
                }
                if(char2 < word2[index2].size()-1){
                    char2++;
                } else {
                    index2++;
                    char2 = 0;
                }
            }
        }
        return index1 == word1.size() && index2 == word2.size();
    }
};
