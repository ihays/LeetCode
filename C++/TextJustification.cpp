//Ian Hays
//01-09-2021
//https://leetcode.com/problems/text-justification/
//SC: O(N^2) TC: O(N^2)

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        int index = 0;
        while(index < words.size()){
            int totalSpaces = maxWidth;
            int wordCount = 0;
            int startIndex = index;
            //determine word count and amount of spaces
            while((totalSpaces - (int)words[index].length()) >= 0 && index < words.size()){
                totalSpaces -= (words[index].length() + 1);    
                index++;
                wordCount++;
            }
            totalSpaces++;
            string tmp; 
            //3 scenarios: 1. only one word | 2. last word is used | 3. set of words reach maximum width 
            if(wordCount == 1){
                tmp = words[startIndex] + string(totalSpaces, ' ');
            } else if (index == words.size()) {
                for(int i = startIndex; i < words.size(); i++){
                    tmp += words[i];
                    if(i != index-1) tmp += " " //don't add space to last word;
                }
                tmp += string(totalSpaces, ' ');
            } else {
                int spaces = totalSpaces / (wordCount-1);
                int extraSpaces = totalSpaces % (wordCount-1);
                for(int i = startIndex; i < index; i++){
                    tmp += words[i];
                    if(i != index-1) tmp += string(spaces+1, ' ') //don't add space to last word;
                    if(extraSpaces){
                        tmp += " " ;
                        extraSpaces--;
                    }
                }
            } 
            res.push_back(tmp);
        }
        return res;
    }
};
