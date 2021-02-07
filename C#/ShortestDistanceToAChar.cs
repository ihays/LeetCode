//Ian Hays
//02-07-2021
//https://leetcode.com/problems/shortest-distance-to-a-character/
//SC: O(N) TC: O(N)

public class Solution 
{
    public int[] ShortestToChar(string s, char c) 
    {
        int index = Int32.MaxValue;
        int[] result = new int[s.Length];
        result = Enumerable.Repeat(Int32.MaxValue, s.Length).ToArray();

        for(int i = 0; i < s.Length; i++)
        {
            if(s[i] == c) index = i;
            result[i] = Math.Abs(index - i);
        }
        
        for(int i = s.Length-1; i >= 0; i--)
        {
            if(s[i] == c) index = i;
            result[i] = Math.Min(result[i],Math.Abs(index - i));
        }
    
        return result;     
   }
}
