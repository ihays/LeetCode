# Ian Hays
# 08-04-2020
# https://leetcode.com/problems/department-top-three-salaries/

# Write your MySQL query statement below
SELECT dep.Name AS Department,
       emp.Name AS Employee, 
       emp.Salary
FROM Employee emp
INNER JOIN Department dep
ON dep.Id = emp.DepartmentId
WHERE 
    (SELECT COUNT(DISTINCT SALARY) 
     FROM Employee 
     WHERE DepartmentId = emp.DepartmentId
     AND Salary > emp.Salary ) < 3
