/***********************************************************************************************
Problem      Users That Actively Request Confirmation Messages
Developer    Ian Hays
Date         09/09/2021
URL          https://leetcode.com/problems/employee-bonus/
Time         565 ms
Description  Join Employee and Bonus on the empId filtering values where the bonus is less than 
             1000 using coalesce to keep the null entries. 
************************************************************************************************/

/* Write your T-SQL query statement below */
SELECT e.name, 
       b.bonus
FROM Employee e LEFT JOIN Bonus b
ON b.empId = e.empId
WHERE COALESCE(b.bonus, 0) < 1000
