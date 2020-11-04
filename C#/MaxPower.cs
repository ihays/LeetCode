// Ian Hays
// https://leetcode.com/problems/consecutive-characters/
// SC: O(1) TC: O(N)

using System;
using System.Collections.Generic;
using System.Text;

namespace LeetCode
{
    public class LeetCode
    {
        public static int MaxPower(string s)
        {
            int res = 1;
            int count = 1;

            for (int i = 1; i < s.Length; i++)
            {
                if (s[i - 1] == s[i])
                {
                    count++;
                }
                else
                {
                    count = 1;
                }
                res = Math.Max(res, count);
            }
            return res;
        }
    }
}
