/***********************************************************************************************
Problem      Vowel Spellchecker
Developer    Ian Hays
Date         03/22/2021
URL          https://leetcode.com/problems/vowel-spellchecker/
Space        O(N) 
Time         O(N)
Description  We build hash maps based on the 3 rules to determine spell checker. Evaluate rules and
             set the string. If all rules fail, set to empty string.
************************************************************************************************/

class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_map<string,bool> wordMap;
        unordered_map<string,string> capitalizationMap;
        unordered_map<string,string> vowelErrorMap;
        for(auto str: wordlist){
            wordMap[str] = true;
            string lower = lowerCase(str);
            if(capitalizationMap.find(lower) == capitalizationMap.end()){
                capitalizationMap[lower] = str;
            }
            string vowelStr = vowelEncode(lower);
            if(vowelErrorMap.find(vowelStr) == vowelErrorMap.end()){
                vowelErrorMap[vowelStr] = str;
            }
        }
        
        vector<string> res;
        for(int i = 0; i < queries.size(); i++){
            string query = queries[i];
            string lower = lowerCase(query);
            string vowelStr = vowelEncode(lower);
            string result = "";
            if(wordMap[query]){
                result = queries[i];
            } else if(capitalizationMap.find(lower) != capitalizationMap.end()){
                result = capitalizationMap[lower];
            } else if(vowelErrorMap.find(vowelStr) != vowelErrorMap.end()){
                result = vowelErrorMap[vowelStr];
            }
            res.push_back(result);
        }
        return res;
    }
    
    string lowerCase(string str){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }
    

    
    string vowelEncode(string str){
        for(auto& ch: str){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
                ch = '#';
            }
        }
        return str;
    }
};
