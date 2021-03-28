//Ian Hays
//12-08-20
//https://leetcode.com/problems/goal-parser-interpretation/
//SC: O(N) TC: O(N)

class Solution {
public:
    string interpret(string command) {
        vector<string> alphabet = {"G","()", "(al)"};
        vector<string> parse = {"G", "o", "al"};
        string res;

        int index = 0;
        for(int i = 0; i < command.size(); i++){
            for(int j = 0; j < alphabet.size(); j++){
                if(alphabet[j].size() + i > command.size()) continue;
                if(command.substr(i, alphabet[j].size()) == alphabet[j]){
                    res += parse[j];
                }
            }
        }
        return res; 
    }
};
