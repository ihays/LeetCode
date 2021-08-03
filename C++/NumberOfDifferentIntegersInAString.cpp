/***********************************************************************************************
Problem      Number of Different Integers in a String
Developer    Ian Hays
Date         08/3/2021
URL          https://leetcode.com/problems/number-of-different-integers-in-a-string/
Space        O(N) 
Time         O(N)
Description  Transform the input string by replacing all chars with spaces. We use a string stream
             to insert the words (removing leading zeroes) into an unordered set and return the size.
************************************************************************************************/

class Solution {
public:
    int numDifferentIntegers(string word) {
        transform(begin(word), end(word), begin(word), [](char ch){return isalpha(ch) ? ' ' : ch;});
        unordered_set<string> words;
        istringstream iss(word);
        while(iss >> word) words.insert(word.erase(0, word.find_first_not_of('0'))); 
        return size(words);
    }
};
