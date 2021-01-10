  
//Ian Hays
//01-09-2021
//https://leetcode.com/problems/text-justification/
//SC: O(N^2) TC: O(N^2)

public class Solution {
    public IList<string> FullJustify(string[] words, int maxWidth) {
        List<string> res = new List<string>();
        int index = 0;
        while(index < words.Length){
            int totalSpaces = maxWidth;
            int wordCount = 0;
            int startIndex = index;
            //determine word count and amount of spaces
            while(index < words.Length && (totalSpaces - words[index].Length) >= 0 ){
                totalSpaces -= (words[index].Length + 1);    
                index++;
                wordCount++;
            }
            totalSpaces++;
            StringBuilder tmp = new StringBuilder(); 
            //3 scenarios: 1. only one word | 2. last word is used | 3. set of words reach maximum width 
            if(wordCount == 1){
                tmp.Append(words[startIndex]);
                tmp.Append(' ', totalSpaces);
            } else if (index == words.Length) {
                for(int i = startIndex; i < words.Length; i++){
                    tmp.Append(words[i]);
                    if(i != index-1) tmp.Append(" ");
                }
                tmp.Append(' ', totalSpaces);
            } else {
                int spaces = totalSpaces / (wordCount-1);
                int extraSpaces = totalSpaces % (wordCount-1);
                for(int i = startIndex; i < index; i++){
                    tmp.Append(words[i]);
                    if(i != index-1) tmp.Append(' ', spaces + 1);
                    if(extraSpaces > 0){
                        tmp.Append(" ") ;
                        extraSpaces--;
                    }
                }
            }
            var result = tmp.ToString();
            res.Add(result);
        }
        return res;
    }
}
