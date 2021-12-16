/***********************************************************************************************
Problem      Number of Days Between Dates
Developer    Ian Hays
Date         12/16/2021
URL          https://leetcode.com/problems/number-of-days-between-two-dates/
Space        O(1)
Time         O(1)
Description  Use rata die day to determine days between dates
************************************************************************************************/

class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        int year1 = stoi(date1.substr(0,4));
        int year2 = stoi(date2.substr(0,4));
        int month1 = stoi(date1.substr(5,2));
        int month2 = stoi(date2.substr(5,2));
        int day1 = stoi(date1.substr(8,2));
        int day2 = stoi(date2.substr(8,2));
        return abs(rdn(year1,month1,day1) - rdn(year2,month2,day2));
    }
    
    int rdn(int y, int m, int d) { /* Rata Die day one is 0001-01-01 */
        if (m < 3)
            y--, m += 12;
        return 365*y + y/4 - y/100 + y/400 + (153*m - 457)/5 + d - 306;
    }
};
