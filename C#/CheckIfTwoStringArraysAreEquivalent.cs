//Ian Hays
//01-03-21
//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
//SC: O(1) TC: O(N)

public class Solution {
    public bool ArrayStringsAreEqual(string[] word1, string[] word2) {
        int index1 = 0;
        int char1 = 0;
        int index2 = 0;
        int char2 = 0;
        
        while(index1 < word1.Length && index2 < word2.Length){
            if(word1[index1][char1] != word2[index2][char2]){
                return false;   
            } else {
                if(char1 < word1[index1].Length-1){
                    char1++;
                } else {
                    index1++;
                    char1 = 0;
                }
                if(char2 < word2[index2].Length-1){
                    char2++;
                } else {
                    index2++;
                    char2 = 0;
                }
            }
        }
        return index1 == word1.Length && index2 == word2.Length;
    }
}
