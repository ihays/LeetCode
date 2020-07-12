# Ian Hays
# 07-12-2020
# https://leetcode.com/problems/reformat-department-table/


# Write your MySQL query statement below
SELECT id,
       sum(CASE WHEN month = 'Jan' THEN revenue ELSE null END) as Jan_Revenue,
       sum(CASE WHEN month = 'Feb' THEN revenue ELSE null END) as Feb_Revenue,
       sum(CASE WHEN month = 'Mar' THEN revenue ELSE null END) as Mar_Revenue,
       sum(CASE WHEN month = 'Apr' THEN revenue ELSE null END) as Apr_Revenue,
       sum(CASE WHEN month = 'May' THEN revenue ELSE null END) as May_Revenue,
       sum(CASE WHEN month = 'Jun' THEN revenue ELSE null END) as Jun_Revenue,
       sum(CASE WHEN month = 'Jul' THEN revenue ELSE null END) as Jul_Revenue,
       sum(CASE WHEN month = 'Aug' THEN revenue ELSE null END) as Aug_Revenue,
       sum(CASE WHEN month = 'Sep' THEN revenue ELSE null END) as Sep_Revenue,
       sum(CASE WHEN month = 'Oct' THEN revenue ELSE null END) as Oct_Revenue,
       sum(CASE WHEN month = 'Nov' THEN revenue ELSE null END) as Nov_Revenue,
       sum(CASE WHEN month = 'Dec' THEN revenue ELSE null END) as Dec_Revenue
FROM Department
group by id
