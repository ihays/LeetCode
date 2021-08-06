/***********************************************************************************************
Problem      Check if Word Equals Summation of Two Words
Developer    Ian Hays
Date         08/06/2021
URL          https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
Space        O(1) 
Time         O(N)
Description  Convert word to number and sum first/second and check if equal to target.
************************************************************************************************/

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return sum(firstWord) + sum(secondWord) == sum(targetWord);
    }
    
    int sum(string word){
        int sum = 0;
        for(auto ch: word){    
            sum *= 10;
            sum += ch-'a';
        }
        return sum;
    }
};
