/***********************************************************************************************
Problem      Implement Trie Prefix Tree
Developer    Ian Hays
Date         10/08/2021
URL          https://leetcode.com/problems/implement-trie-prefix-tree/
Space        O(N) 
Time         O(N)
Description  Trie is built using a TrieNode structure that is a map of characters to a node. When
             a word is complete, we set isWord to true. Searching is true if the word is complete
             prefix is true if the word either complete/uncomplete.
************************************************************************************************/

struct TrieNode{
    unordered_map<char,TrieNode*> node; 
    bool isWord = false;
};

class Trie {
public:
    TrieNode* root;
    Trie(): root(new TrieNode()){}
    
    void insert(string word) {
        TrieNode* t = root;
        for(auto ch: word){
            if(t->node[ch] == nullptr) t->node[ch] = new TrieNode();
            t = t->node[ch];
        }
        t->isWord = true;
    }
    
    bool search(string word) {
        TrieNode* t = root;
        for(auto ch: word){
            if(t->node[ch] != nullptr) t = t->node[ch];
            else return false;
        }
        return t->isWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* t = root;
        for(auto ch: prefix){
            if(t->node[ch] != nullptr) t = t->node[ch];
            else return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
