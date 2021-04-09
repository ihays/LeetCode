using System;
using System.Collections.Generic;

namespace ClassLibrary
{
    public static class Solution
    {
        public static bool IsAlienSorted(string[] words, string order) {
            if(words == null || words.Length <= 1) return true;
            Dictionary<char,int> dict = new Dictionary<char,int>();
            for(int i = 0; i < order.Length; i++)
            {
                dict.Add(order[i], i);
            }

            for(int i = 1; i < words.Length; i++)
            {
                string a_str = words[i-1];
                string b_str = words[i];
                if(!IsValid(a_str, b_str, dict)) return false;
            }

            return true;
        }
        public static bool IsValid(string a_str, string b_str, Dictionary<char,int> dict)
        {
            int length = Math.Min(a_str.Length, b_str.Length);
            for(int i = 0; i < length; i++)
            {
                char a_char = a_str[i];
                char b_char = b_str[i];

                if(a_char != b_char) 
                    return dict[a_char] < dict[b_char];

            }
            return a_str.Length <= b_str.Length;
        }
    }
}
