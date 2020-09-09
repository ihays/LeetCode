# Ian Hays 
# 07-12-2020 
# https://leetcode.com/problems/reformat-department-table/

# Write your MySQL query statement below 
SELECT id, 
       Sum(CASE 
             WHEN month = 'Jan' THEN revenue 
             ELSE NULL 
           end) AS Jan_Revenue, 
       Sum(CASE 
             WHEN month = 'Feb' THEN revenue 
             ELSE NULL 
           end) AS Feb_Revenue, 
       Sum(CASE 
             WHEN month = 'Mar' THEN revenue 
             ELSE NULL 
           end) AS Mar_Revenue, 
       Sum(CASE 
             WHEN month = 'Apr' THEN revenue 
             ELSE NULL 
           end) AS Apr_Revenue, 
       Sum(CASE 
             WHEN month = 'May' THEN revenue 
             ELSE NULL 
           end) AS May_Revenue, 
       Sum(CASE 
             WHEN month = 'Jun' THEN revenue 
             ELSE NULL 
           end) AS Jun_Revenue, 
       Sum(CASE 
             WHEN month = 'Jul' THEN revenue 
             ELSE NULL 
           end) AS Jul_Revenue, 
       Sum(CASE 
             WHEN month = 'Aug' THEN revenue 
             ELSE NULL 
           end) AS Aug_Revenue, 
       Sum(CASE 
             WHEN month = 'Sep' THEN revenue 
             ELSE NULL 
           end) AS Sep_Revenue, 
       Sum(CASE 
             WHEN month = 'Oct' THEN revenue 
             ELSE NULL 
           end) AS Oct_Revenue, 
       Sum(CASE 
             WHEN month = 'Nov' THEN revenue 
             ELSE NULL 
           end) AS Nov_Revenue, 
       Sum(CASE 
             WHEN month = 'Dec' THEN revenue 
             ELSE NULL 
           end) AS Dec_Revenue 
FROM   department 
GROUP  BY id 
