/***********************************************************************************************
Problem      Count Largest Group
Developer    Ian Hays
Date         04/14/2021
URL          https://leetcode.com/problems/count-largest-group/
Space        O(N) 
Time         O(N)
Description  Build dictionary of sums from 1 to n. Use LINQ to find the max value, and return the
             count of entries in the dictionary where the value is equal to the max value. 
************************************************************************************************/

public class Solution {
    public int CountLargestGroup(int n) {
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