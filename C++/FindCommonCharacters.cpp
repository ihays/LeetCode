/***********************************************************************************************
Problem      Find Common Characters
Developer    Ian Hays
Date         05/17/2021
URL          https://leetcode.com/problems/find-common-characters/
Space        O(N) 
Time         O(MN)
Description  While storing each word as a map, only grab the minimum value. Create string based
             on minimum mapped values from strings to get the common characters. 
************************************************************************************************/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> map(26, INT_MAX);
        
        for(int i = 0; i < words.size(); i++){
            int tmp[26] = {0};
            for(int j = 0; j < words[i].size(); j++){
                tmp[words[i][j]-'a']++;
            }
            
            for(int j = 0; j < 26; j++){
                map[j] = min(map[j],tmp[j]);
            }
        }
        
        vector<string> res;
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < map[i]; j++){
                string s = "";
                s += 'a' + i;
                res.push_back(s);
            }
        }
        return res;
        
    }
};
