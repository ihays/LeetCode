//Ian Hays
//12-17-20
//https://leetcode.com/problems/substring-with-concatenation-of-all-words/
//SC: O(N) TC: O(N^2)

public class Solution {
    public IList<int> FindSubstring(string s, string[] words) {
        List<int> result = new List<int>();
        Dictionary<string,int> dictionary = new Dictionary<string,int>();
        foreach(string str in words)
        {
            int count = 0;
            if(dictionary.TryGetValue(str, out count))
            {
                dictionary[str] = count + 1;
            }
            else 
            {
                dictionary.Add(str,1);
            }
        }
    
        int length = words[0].Length;
        int numOfWords = words.Length;
        
        for(int i = 0; i < s.Length - numOfWords * length + 1; i++){
            Dictionary<string,int> seen = new Dictionary<string,int>();
            int j = 0;
            for(;j < numOfWords; j++)
            {
                string word = s.Substring(i + j * length, length);
                if(dictionary.ContainsKey(word))
                {
                    int count = 0;
                    if(seen.TryGetValue(word, out count))
                    {
                        seen[word] = count + 1;
                    }
                    else 
                    {
                        seen.Add(word,1);
                    }
                    if(seen[word] > dictionary[word])
                    {
                        break;
                    }
                } else break;
            }
            if(numOfWords ==  j) result.Add(i);
        }
        return result;
    }
}
