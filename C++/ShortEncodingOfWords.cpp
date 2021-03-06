/***********************************************************************************************
Problem      Short Encoding of Words
Developer    Ian Hays
Date         03/06/2021
URL          https://leetcode.com/problems/short-encoding-of-words/
Space        O(N) 
Time         O(N^2)
Description  This problem can be though of as a Trie where you sum the length of each leaf + 1 to 
             account for each '#'. Build a Trie of reversed values (words match based on end of 
             string) and then DFS through Trie summing lenghts of the leaves.            
************************************************************************************************/

class TrieNode {
public:
    unordered_map<char, TrieNode*> next;
};

class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        TrieNode* root = new TrieNode;
        for(int i = 0; i < words.size(); i++){
            string word = words[i];
            reverse(word.begin(), word.end());
            buildTrie(root, word);
        }
        return countLeaves(root,1);
    }
    
    void buildTrie(TrieNode* root, string word){
        if(word == "") return;
        char ch = word[0];
        if(!root->next[ch]) root->next[ch] = new TrieNode;
        buildTrie(root->next[ch], word.substr(1));
    }
    int countLeaves(TrieNode* root, int level){
        if(root->next.size() == 0) return level;
        int sum = 0;
        for (auto [ key, value ] : root->next) {
            sum += countLeaves(value, level+1);
        }
        return sum;
    }
};
