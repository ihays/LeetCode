/***********************************************************************************************
Problem      Partitioning Into Minimum Number Of Deci-Binary Numbers
Developer    Ian Hays
Date         05/26/2021
URL          https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
Space        O(1) 
Time         O(N)
Description  Return the max value and subtract '0' to grab the decimal value.
************************************************************************************************/

class Solution {
public:
    int minPartitions(string n) {
        return *max_element(begin(n),end(n)) - '0';
    }
};
