# Ian Hays
# 07-11-2020
# https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/

# Write your MySQL query statement below
select u.unique_id,
       e.name

from Employees e 
left join EmployeeUNI u
on u.id = e.id
