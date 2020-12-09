//Ian Hays
//12-08-20
//https://leetcode.com/problems/richest-customer-wealth/
//SC: O(N^2) TC: O(N^2)

public class Solution {
    public int MaximumWealth(int[][] accounts)
    {
         return accounts.Select(row => row.Sum()).Max();    
    }
}
