using System;
using System.Collections.Generic;

namespace ClassLibrary
{
    public static class Solution
    {
        public static bool HalvesAreAlike(string s) 
        {
            HashSet<char> hset = new HashSet<char>() {'a','e','i','o','u','A','E','I','O','U'};
            int length = s.Length;
            int result = 0;
            
            for(int i = 0; i < length; i++){
                if(hset.Contains(s[i]))
                {
                    result += i >= length/2 ? 1 : -1; 
                }
            }

            return result == 0;
        }
    }
}
