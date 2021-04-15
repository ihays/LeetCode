using System;
using System.Collections.Generic;
using System.Linq;

namespace ClassLibrary
{
    public class Solution {
        public static int CountLargestGroup(int n) {
            Dictionary<int,int> dict = new Dictionary<int,int>();
            for(int i = 1; i <= n; i++)
            {
                int sum = 0;
                int val = i;
                while(val > 0)
                {
                    sum += val%10;
                    val /= 10;
                }
                
                if(!dict.ContainsKey(sum))
                {
                    dict.Add(sum,1);
                }
                else 
                {
                    dict[sum]++;
                }
            }
            int max = dict.Max(entry => entry.Value);
            return dict.Where(entry => entry.Value == max).Count();
        }
    }
}
