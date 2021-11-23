/***********************************************************************************************
Problem      Check If a Word Occurs As a Prefix of Any Word in a Sentence
Developer    Ian Hays
Date         11/22/2021
URL          https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
Space        O(N) 
Time         O(N)
Description  Store the sentence in a string stream and compare the index of the searchWord to each
             word in the sentence. We return the first word that finds on index 0 for it is the
             prefix. 
************************************************************************************************/

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream iss(sentence);
        string word;
        int count = 1;
        while(iss >> word){
            if(word.find(searchWord) == 0) return count;
            count++;  
        }
        return -1;
    }
};
